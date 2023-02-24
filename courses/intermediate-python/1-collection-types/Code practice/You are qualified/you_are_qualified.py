job_skills = {'Python', 'HTML', 'SQL', 'C++', 'Java', 'Scala'}
candidate_skills = {'HTML', 'CSS', 'JS', 'C#', 'NodeJS'}

matched_skills = list(job_skills & candidate_skills)[0]
print(matched_skills)
