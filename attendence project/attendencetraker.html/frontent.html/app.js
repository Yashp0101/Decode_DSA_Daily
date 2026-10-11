document.getElementById('attendanceForm').addEventListener('submit', async function (e) {
    e.preventDefault();
    const studentName = document.getElementById('studentName').value;

    const response = await fetch('http://localhost:3000/attendance', {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify({ name: studentName })
    });

    const data = await response.json();
    if (data.success) {
        alert('Attendance marked for ' + studentName);
        loadAttendance();
    }
    document.getElementById('studentName').value = '';
});

async function loadAttendance() {
    const response = await fetch('http://localhost:3000/attendance');
    const data = await response.json();
    const list = document.getElementById('attendanceList');
    list.innerHTML = '';
    data.forEach(student => {
        const li = document.createElement('li');
        li.textContent = ${student.name} - ${student.date};
        list.appendChild(li);
    });
}

loadAttendance();