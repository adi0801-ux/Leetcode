# Write your MySQL query statement below
select max(num) as num from 
(select count(num) as cnt, num  from mynumbers
group by num
having cnt=1)as s;
