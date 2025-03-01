
select eu.unique_id , e.name
from employees e
left join employeeuni eu ON ( e.id = eu.id )
order by eu.unique_id asc