 Create VPC: vpc-xxxxxid
 Enable DNS hostnames
 Enable DNS resolution
 Verifying VPC creation: vpc-xxxxxid  
 Create S3 endpoint: vpce-xxxxxid 
 Create subnet: subnet-xxxxxid  
 Create subnet: subnet-xxxxxid  
 Create subnet: subnet-xxxxxid 
 Create subnet: subnet-xxxxxid 
 Create internet gateway: igw-xxxxxid
 Attach internet gateway to the VPC
 Create route table: rtb-xxxxxid 
 Create route
 Associate route table
 Associate route table
 Create route table: rtb-xxxxxid  
 Associate route table
 Create route table: rtb-xxxxxid  
 Associate route table
 Verifying route table creation
 Associate S3 endpoint with private subnet route tables: vpce-xxxxxid  
 
 A default VPC enables you to launch Amazon EC2 resources without having to create and configure your own VPC and subnets. We'll create a default VPC with a default subnet in each Availability Zone, an internet gateway, and a route table with a route to the internet gateway.
