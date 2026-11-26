/* Write your PL/SQL query statement below */
select d.name as Department, e.name as Employee, salary as Salary
from Department d, Employee e
where d.id = e.departmentId and e.salary =
(select max(salary) from Employee
where departmentId = e.departmentId);