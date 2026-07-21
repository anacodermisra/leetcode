# Write your MySQL query statement below
select p.project_id,ROUND(SUM(e.experience_years)/COUNT(e.employee_id),2) as average_years
FROM Project as p
LEFT JOIN Employee as e ON p.employee_id=e.employee_id
GROUP BY project_id