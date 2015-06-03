/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/opsworks/model/StackConfigurationManager.h>
#include <aws/opsworks/model/ChefConfiguration.h>
#include <aws/opsworks/model/Source.h>
#include <aws/opsworks/model/RootDeviceType.h>
#include <aws/opsworks/model/StackAttributesKeys.h>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /*
  */
  class AWS_OPSWORKS_API CreateStackRequest : public OpsWorksRequest
  {
  public:
    CreateStackRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /*
     <p>The stack name.</p>
    */
    inline const Aws::String& GetName() const{ return m_name; }
    /*
     <p>The stack name.</p>
    */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /*
     <p>The stack name.</p>
    */
    inline void SetName(const char* value) { m_name.assign(value); }

    /*
     <p>The stack name.</p>
    */
    inline CreateStackRequest&  WithName(const Aws::String& value) { SetName(value); return *this;}

    /*
     <p>The stack name.</p>
    */
    inline CreateStackRequest& WithName(const char* value) { SetName(value); return *this;}

    /*
     <p>The stack AWS region, such as "us-east-1". For more information about Amazon regions, see <a href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and Endpoints</a>.</p>
    */
    inline const Aws::String& GetRegion() const{ return m_region; }
    /*
     <p>The stack AWS region, such as "us-east-1". For more information about Amazon regions, see <a href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and Endpoints</a>.</p>
    */
    inline void SetRegion(const Aws::String& value) { m_region = value; }

    /*
     <p>The stack AWS region, such as "us-east-1". For more information about Amazon regions, see <a href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and Endpoints</a>.</p>
    */
    inline void SetRegion(const char* value) { m_region.assign(value); }

    /*
     <p>The stack AWS region, such as "us-east-1". For more information about Amazon regions, see <a href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and Endpoints</a>.</p>
    */
    inline CreateStackRequest&  WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /*
     <p>The stack AWS region, such as "us-east-1". For more information about Amazon regions, see <a href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and Endpoints</a>.</p>
    */
    inline CreateStackRequest& WithRegion(const char* value) { SetRegion(value); return *this;}

    /*
     <p>The ID of the VPC that the stack is to be launched into. It must be in the specified region. All instances are launched into this VPC, and you cannot change the ID later.</p> <ul> <li>If your account supports EC2 Classic, the default value is no VPC.</li> <li>If your account does not support EC2 Classic, the default value is the default VPC for the specified region.</li> </ul> <p>If the VPC ID corresponds to a default VPC and you have specified either the <code>DefaultAvailabilityZone</code> or the <code>DefaultSubnetId</code> parameter only, AWS OpsWorks infers the value of the other parameter. If you specify neither parameter, AWS OpsWorks sets these parameters to the first valid Availability Zone for the specified region and the corresponding default VPC subnet ID, respectively.</p> <p>If you specify a nondefault VPC ID, note the following:</p> <ul> <li>It must belong to a VPC in your account that is in the specified region.</li> <li>You must specify a value for <code>DefaultSubnetId</code>.</li> </ul> <p>For more information on how to use AWS OpsWorks with a VPC, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-vpc.html">Running a Stack in a VPC</a>. For more information on default VPC and EC2 Classic, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported Platforms</a>. </p>
    */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    /*
     <p>The ID of the VPC that the stack is to be launched into. It must be in the specified region. All instances are launched into this VPC, and you cannot change the ID later.</p> <ul> <li>If your account supports EC2 Classic, the default value is no VPC.</li> <li>If your account does not support EC2 Classic, the default value is the default VPC for the specified region.</li> </ul> <p>If the VPC ID corresponds to a default VPC and you have specified either the <code>DefaultAvailabilityZone</code> or the <code>DefaultSubnetId</code> parameter only, AWS OpsWorks infers the value of the other parameter. If you specify neither parameter, AWS OpsWorks sets these parameters to the first valid Availability Zone for the specified region and the corresponding default VPC subnet ID, respectively.</p> <p>If you specify a nondefault VPC ID, note the following:</p> <ul> <li>It must belong to a VPC in your account that is in the specified region.</li> <li>You must specify a value for <code>DefaultSubnetId</code>.</li> </ul> <p>For more information on how to use AWS OpsWorks with a VPC, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-vpc.html">Running a Stack in a VPC</a>. For more information on default VPC and EC2 Classic, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported Platforms</a>. </p>
    */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /*
     <p>The ID of the VPC that the stack is to be launched into. It must be in the specified region. All instances are launched into this VPC, and you cannot change the ID later.</p> <ul> <li>If your account supports EC2 Classic, the default value is no VPC.</li> <li>If your account does not support EC2 Classic, the default value is the default VPC for the specified region.</li> </ul> <p>If the VPC ID corresponds to a default VPC and you have specified either the <code>DefaultAvailabilityZone</code> or the <code>DefaultSubnetId</code> parameter only, AWS OpsWorks infers the value of the other parameter. If you specify neither parameter, AWS OpsWorks sets these parameters to the first valid Availability Zone for the specified region and the corresponding default VPC subnet ID, respectively.</p> <p>If you specify a nondefault VPC ID, note the following:</p> <ul> <li>It must belong to a VPC in your account that is in the specified region.</li> <li>You must specify a value for <code>DefaultSubnetId</code>.</li> </ul> <p>For more information on how to use AWS OpsWorks with a VPC, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-vpc.html">Running a Stack in a VPC</a>. For more information on default VPC and EC2 Classic, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported Platforms</a>. </p>
    */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /*
     <p>The ID of the VPC that the stack is to be launched into. It must be in the specified region. All instances are launched into this VPC, and you cannot change the ID later.</p> <ul> <li>If your account supports EC2 Classic, the default value is no VPC.</li> <li>If your account does not support EC2 Classic, the default value is the default VPC for the specified region.</li> </ul> <p>If the VPC ID corresponds to a default VPC and you have specified either the <code>DefaultAvailabilityZone</code> or the <code>DefaultSubnetId</code> parameter only, AWS OpsWorks infers the value of the other parameter. If you specify neither parameter, AWS OpsWorks sets these parameters to the first valid Availability Zone for the specified region and the corresponding default VPC subnet ID, respectively.</p> <p>If you specify a nondefault VPC ID, note the following:</p> <ul> <li>It must belong to a VPC in your account that is in the specified region.</li> <li>You must specify a value for <code>DefaultSubnetId</code>.</li> </ul> <p>For more information on how to use AWS OpsWorks with a VPC, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-vpc.html">Running a Stack in a VPC</a>. For more information on default VPC and EC2 Classic, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported Platforms</a>. </p>
    */
    inline CreateStackRequest&  WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /*
     <p>The ID of the VPC that the stack is to be launched into. It must be in the specified region. All instances are launched into this VPC, and you cannot change the ID later.</p> <ul> <li>If your account supports EC2 Classic, the default value is no VPC.</li> <li>If your account does not support EC2 Classic, the default value is the default VPC for the specified region.</li> </ul> <p>If the VPC ID corresponds to a default VPC and you have specified either the <code>DefaultAvailabilityZone</code> or the <code>DefaultSubnetId</code> parameter only, AWS OpsWorks infers the value of the other parameter. If you specify neither parameter, AWS OpsWorks sets these parameters to the first valid Availability Zone for the specified region and the corresponding default VPC subnet ID, respectively.</p> <p>If you specify a nondefault VPC ID, note the following:</p> <ul> <li>It must belong to a VPC in your account that is in the specified region.</li> <li>You must specify a value for <code>DefaultSubnetId</code>.</li> </ul> <p>For more information on how to use AWS OpsWorks with a VPC, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-vpc.html">Running a Stack in a VPC</a>. For more information on default VPC and EC2 Classic, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ec2-supported-platforms.html">Supported Platforms</a>. </p>
    */
    inline CreateStackRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}

    /*
     <p>One or more user-defined key/value pairs to be added to the stack attributes.</p>
    */
    inline const Aws::Map<StackAttributesKeys, Aws::String>& GetAttributes() const{ return m_attributes; }
    /*
     <p>One or more user-defined key/value pairs to be added to the stack attributes.</p>
    */
    inline void SetAttributes(const Aws::Map<StackAttributesKeys, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /*
     <p>One or more user-defined key/value pairs to be added to the stack attributes.</p>
    */
    inline CreateStackRequest&  WithAttributes(const Aws::Map<StackAttributesKeys, Aws::String>& value) { SetAttributes(value); return *this;}

    /*
     <p>One or more user-defined key/value pairs to be added to the stack attributes.</p>
    */
    inline CreateStackRequest& AddAttributes(const StackAttributesKeys& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /*
     <p>One or more user-defined key/value pairs to be added to the stack attributes.</p>
    */
    inline CreateStackRequest& AddAttributes(const StackAttributesKeys& key, const char* value) { m_attributesHasBeenSet = true; m_attributes[key] = value; return *this; }

    /*
     <p>The stack AWS Identity and Access Management (IAM) role, which allows AWS OpsWorks to work with AWS resources on your behalf. You must set this parameter to the Amazon Resource Name (ARN) for an existing IAM role. For more information about IAM ARNs, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using Identifiers</a>.</p>
    */
    inline const Aws::String& GetServiceRoleArn() const{ return m_serviceRoleArn; }
    /*
     <p>The stack AWS Identity and Access Management (IAM) role, which allows AWS OpsWorks to work with AWS resources on your behalf. You must set this parameter to the Amazon Resource Name (ARN) for an existing IAM role. For more information about IAM ARNs, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using Identifiers</a>.</p>
    */
    inline void SetServiceRoleArn(const Aws::String& value) { m_serviceRoleArn = value; }

    /*
     <p>The stack AWS Identity and Access Management (IAM) role, which allows AWS OpsWorks to work with AWS resources on your behalf. You must set this parameter to the Amazon Resource Name (ARN) for an existing IAM role. For more information about IAM ARNs, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using Identifiers</a>.</p>
    */
    inline void SetServiceRoleArn(const char* value) { m_serviceRoleArn.assign(value); }

    /*
     <p>The stack AWS Identity and Access Management (IAM) role, which allows AWS OpsWorks to work with AWS resources on your behalf. You must set this parameter to the Amazon Resource Name (ARN) for an existing IAM role. For more information about IAM ARNs, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using Identifiers</a>.</p>
    */
    inline CreateStackRequest&  WithServiceRoleArn(const Aws::String& value) { SetServiceRoleArn(value); return *this;}

    /*
     <p>The stack AWS Identity and Access Management (IAM) role, which allows AWS OpsWorks to work with AWS resources on your behalf. You must set this parameter to the Amazon Resource Name (ARN) for an existing IAM role. For more information about IAM ARNs, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using Identifiers</a>.</p>
    */
    inline CreateStackRequest& WithServiceRoleArn(const char* value) { SetServiceRoleArn(value); return *this;}

    /*
     <p>The ARN of an IAM profile that is the default profile for all of the stack's EC2 instances. For more information about IAM ARNs, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using Identifiers</a>.</p>
    */
    inline const Aws::String& GetDefaultInstanceProfileArn() const{ return m_defaultInstanceProfileArn; }
    /*
     <p>The ARN of an IAM profile that is the default profile for all of the stack's EC2 instances. For more information about IAM ARNs, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using Identifiers</a>.</p>
    */
    inline void SetDefaultInstanceProfileArn(const Aws::String& value) { m_defaultInstanceProfileArn = value; }

    /*
     <p>The ARN of an IAM profile that is the default profile for all of the stack's EC2 instances. For more information about IAM ARNs, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using Identifiers</a>.</p>
    */
    inline void SetDefaultInstanceProfileArn(const char* value) { m_defaultInstanceProfileArn.assign(value); }

    /*
     <p>The ARN of an IAM profile that is the default profile for all of the stack's EC2 instances. For more information about IAM ARNs, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using Identifiers</a>.</p>
    */
    inline CreateStackRequest&  WithDefaultInstanceProfileArn(const Aws::String& value) { SetDefaultInstanceProfileArn(value); return *this;}

    /*
     <p>The ARN of an IAM profile that is the default profile for all of the stack's EC2 instances. For more information about IAM ARNs, see <a href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">Using Identifiers</a>.</p>
    */
    inline CreateStackRequest& WithDefaultInstanceProfileArn(const char* value) { SetDefaultInstanceProfileArn(value); return *this;}

    /*
     <p>The stack's operating system, which must be set to one of the following.</p> <ul> <li>Standard Linux operating systems: an Amazon Linux version such as <code>Amazon Linux 2014.09</code>, <code>Ubuntu 12.04 LTS</code>, or <code>Ubuntu 14.04 LTS</code>.</li> <li>Custom Linux AMIs: <code>Custom</code>. You specify the custom AMI you want to use when you create instances.</li> <li>Microsoft Windows Server 2012 R2.</li> </ul> <p> The default option is the current Amazon Linux version.</p>
    */
    inline const Aws::String& GetDefaultOs() const{ return m_defaultOs; }
    /*
     <p>The stack's operating system, which must be set to one of the following.</p> <ul> <li>Standard Linux operating systems: an Amazon Linux version such as <code>Amazon Linux 2014.09</code>, <code>Ubuntu 12.04 LTS</code>, or <code>Ubuntu 14.04 LTS</code>.</li> <li>Custom Linux AMIs: <code>Custom</code>. You specify the custom AMI you want to use when you create instances.</li> <li>Microsoft Windows Server 2012 R2.</li> </ul> <p> The default option is the current Amazon Linux version.</p>
    */
    inline void SetDefaultOs(const Aws::String& value) { m_defaultOsHasBeenSet = true; m_defaultOs = value; }

    /*
     <p>The stack's operating system, which must be set to one of the following.</p> <ul> <li>Standard Linux operating systems: an Amazon Linux version such as <code>Amazon Linux 2014.09</code>, <code>Ubuntu 12.04 LTS</code>, or <code>Ubuntu 14.04 LTS</code>.</li> <li>Custom Linux AMIs: <code>Custom</code>. You specify the custom AMI you want to use when you create instances.</li> <li>Microsoft Windows Server 2012 R2.</li> </ul> <p> The default option is the current Amazon Linux version.</p>
    */
    inline void SetDefaultOs(const char* value) { m_defaultOsHasBeenSet = true; m_defaultOs.assign(value); }

    /*
     <p>The stack's operating system, which must be set to one of the following.</p> <ul> <li>Standard Linux operating systems: an Amazon Linux version such as <code>Amazon Linux 2014.09</code>, <code>Ubuntu 12.04 LTS</code>, or <code>Ubuntu 14.04 LTS</code>.</li> <li>Custom Linux AMIs: <code>Custom</code>. You specify the custom AMI you want to use when you create instances.</li> <li>Microsoft Windows Server 2012 R2.</li> </ul> <p> The default option is the current Amazon Linux version.</p>
    */
    inline CreateStackRequest&  WithDefaultOs(const Aws::String& value) { SetDefaultOs(value); return *this;}

    /*
     <p>The stack's operating system, which must be set to one of the following.</p> <ul> <li>Standard Linux operating systems: an Amazon Linux version such as <code>Amazon Linux 2014.09</code>, <code>Ubuntu 12.04 LTS</code>, or <code>Ubuntu 14.04 LTS</code>.</li> <li>Custom Linux AMIs: <code>Custom</code>. You specify the custom AMI you want to use when you create instances.</li> <li>Microsoft Windows Server 2012 R2.</li> </ul> <p> The default option is the current Amazon Linux version.</p>
    */
    inline CreateStackRequest& WithDefaultOs(const char* value) { SetDefaultOs(value); return *this;}

    /*
     <p>The stack's host name theme, with spaces are replaced by underscores. The theme is used to generate host names for the stack's instances. By default, <code>HostnameTheme</code> is set to <code>Layer_Dependent</code>, which creates host names by appending integers to the layer's short name. The other themes are:</p> <ul> <li> <code>Baked_Goods</code> </li> <li> <code>Clouds</code> </li> <li> <code>Europe_Cities</code> </li> <li> <code>Fruits</code> </li> <li> <code>Greek_Deities</code> </li> <li> <code>Legendary_creatures_from_Japan</code> </li> <li> <code>Planets_and_Moons</code> </li> <li> <code>Roman_Deities</code> </li> <li> <code>Scottish_Islands</code> </li> <li> <code>US_Cities</code> </li> <li> <code>Wild_Cats</code> </li> </ul> <p>To obtain a generated host name, call <code>GetHostNameSuggestion</code>, which returns a host name based on the current theme.</p>
    */
    inline const Aws::String& GetHostnameTheme() const{ return m_hostnameTheme; }
    /*
     <p>The stack's host name theme, with spaces are replaced by underscores. The theme is used to generate host names for the stack's instances. By default, <code>HostnameTheme</code> is set to <code>Layer_Dependent</code>, which creates host names by appending integers to the layer's short name. The other themes are:</p> <ul> <li> <code>Baked_Goods</code> </li> <li> <code>Clouds</code> </li> <li> <code>Europe_Cities</code> </li> <li> <code>Fruits</code> </li> <li> <code>Greek_Deities</code> </li> <li> <code>Legendary_creatures_from_Japan</code> </li> <li> <code>Planets_and_Moons</code> </li> <li> <code>Roman_Deities</code> </li> <li> <code>Scottish_Islands</code> </li> <li> <code>US_Cities</code> </li> <li> <code>Wild_Cats</code> </li> </ul> <p>To obtain a generated host name, call <code>GetHostNameSuggestion</code>, which returns a host name based on the current theme.</p>
    */
    inline void SetHostnameTheme(const Aws::String& value) { m_hostnameThemeHasBeenSet = true; m_hostnameTheme = value; }

    /*
     <p>The stack's host name theme, with spaces are replaced by underscores. The theme is used to generate host names for the stack's instances. By default, <code>HostnameTheme</code> is set to <code>Layer_Dependent</code>, which creates host names by appending integers to the layer's short name. The other themes are:</p> <ul> <li> <code>Baked_Goods</code> </li> <li> <code>Clouds</code> </li> <li> <code>Europe_Cities</code> </li> <li> <code>Fruits</code> </li> <li> <code>Greek_Deities</code> </li> <li> <code>Legendary_creatures_from_Japan</code> </li> <li> <code>Planets_and_Moons</code> </li> <li> <code>Roman_Deities</code> </li> <li> <code>Scottish_Islands</code> </li> <li> <code>US_Cities</code> </li> <li> <code>Wild_Cats</code> </li> </ul> <p>To obtain a generated host name, call <code>GetHostNameSuggestion</code>, which returns a host name based on the current theme.</p>
    */
    inline void SetHostnameTheme(const char* value) { m_hostnameThemeHasBeenSet = true; m_hostnameTheme.assign(value); }

    /*
     <p>The stack's host name theme, with spaces are replaced by underscores. The theme is used to generate host names for the stack's instances. By default, <code>HostnameTheme</code> is set to <code>Layer_Dependent</code>, which creates host names by appending integers to the layer's short name. The other themes are:</p> <ul> <li> <code>Baked_Goods</code> </li> <li> <code>Clouds</code> </li> <li> <code>Europe_Cities</code> </li> <li> <code>Fruits</code> </li> <li> <code>Greek_Deities</code> </li> <li> <code>Legendary_creatures_from_Japan</code> </li> <li> <code>Planets_and_Moons</code> </li> <li> <code>Roman_Deities</code> </li> <li> <code>Scottish_Islands</code> </li> <li> <code>US_Cities</code> </li> <li> <code>Wild_Cats</code> </li> </ul> <p>To obtain a generated host name, call <code>GetHostNameSuggestion</code>, which returns a host name based on the current theme.</p>
    */
    inline CreateStackRequest&  WithHostnameTheme(const Aws::String& value) { SetHostnameTheme(value); return *this;}

    /*
     <p>The stack's host name theme, with spaces are replaced by underscores. The theme is used to generate host names for the stack's instances. By default, <code>HostnameTheme</code> is set to <code>Layer_Dependent</code>, which creates host names by appending integers to the layer's short name. The other themes are:</p> <ul> <li> <code>Baked_Goods</code> </li> <li> <code>Clouds</code> </li> <li> <code>Europe_Cities</code> </li> <li> <code>Fruits</code> </li> <li> <code>Greek_Deities</code> </li> <li> <code>Legendary_creatures_from_Japan</code> </li> <li> <code>Planets_and_Moons</code> </li> <li> <code>Roman_Deities</code> </li> <li> <code>Scottish_Islands</code> </li> <li> <code>US_Cities</code> </li> <li> <code>Wild_Cats</code> </li> </ul> <p>To obtain a generated host name, call <code>GetHostNameSuggestion</code>, which returns a host name based on the current theme.</p>
    */
    inline CreateStackRequest& WithHostnameTheme(const char* value) { SetHostnameTheme(value); return *this;}

    /*
     <p>The stack's default Availability Zone, which must be in the specified region. For more information, see <a href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and Endpoints</a>. If you also specify a value for <code>DefaultSubnetId</code>, the subnet must be in the same zone. For more information, see the <code>VpcId</code> parameter description. </p>
    */
    inline const Aws::String& GetDefaultAvailabilityZone() const{ return m_defaultAvailabilityZone; }
    /*
     <p>The stack's default Availability Zone, which must be in the specified region. For more information, see <a href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and Endpoints</a>. If you also specify a value for <code>DefaultSubnetId</code>, the subnet must be in the same zone. For more information, see the <code>VpcId</code> parameter description. </p>
    */
    inline void SetDefaultAvailabilityZone(const Aws::String& value) { m_defaultAvailabilityZoneHasBeenSet = true; m_defaultAvailabilityZone = value; }

    /*
     <p>The stack's default Availability Zone, which must be in the specified region. For more information, see <a href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and Endpoints</a>. If you also specify a value for <code>DefaultSubnetId</code>, the subnet must be in the same zone. For more information, see the <code>VpcId</code> parameter description. </p>
    */
    inline void SetDefaultAvailabilityZone(const char* value) { m_defaultAvailabilityZoneHasBeenSet = true; m_defaultAvailabilityZone.assign(value); }

    /*
     <p>The stack's default Availability Zone, which must be in the specified region. For more information, see <a href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and Endpoints</a>. If you also specify a value for <code>DefaultSubnetId</code>, the subnet must be in the same zone. For more information, see the <code>VpcId</code> parameter description. </p>
    */
    inline CreateStackRequest&  WithDefaultAvailabilityZone(const Aws::String& value) { SetDefaultAvailabilityZone(value); return *this;}

    /*
     <p>The stack's default Availability Zone, which must be in the specified region. For more information, see <a href="http://docs.aws.amazon.com/general/latest/gr/rande.html">Regions and Endpoints</a>. If you also specify a value for <code>DefaultSubnetId</code>, the subnet must be in the same zone. For more information, see the <code>VpcId</code> parameter description. </p>
    */
    inline CreateStackRequest& WithDefaultAvailabilityZone(const char* value) { SetDefaultAvailabilityZone(value); return *this;}

    /*
     <p>The stack's default VPC subnet ID. This parameter is required if you specify a value for the <code>VpcId</code> parameter. All instances are launched into this subnet unless you specify otherwise when you create the instance. If you also specify a value for <code>DefaultAvailabilityZone</code>, the subnet must be in that zone. For information on default values and when this parameter is required, see the <code>VpcId</code> parameter description. </p>
    */
    inline const Aws::String& GetDefaultSubnetId() const{ return m_defaultSubnetId; }
    /*
     <p>The stack's default VPC subnet ID. This parameter is required if you specify a value for the <code>VpcId</code> parameter. All instances are launched into this subnet unless you specify otherwise when you create the instance. If you also specify a value for <code>DefaultAvailabilityZone</code>, the subnet must be in that zone. For information on default values and when this parameter is required, see the <code>VpcId</code> parameter description. </p>
    */
    inline void SetDefaultSubnetId(const Aws::String& value) { m_defaultSubnetIdHasBeenSet = true; m_defaultSubnetId = value; }

    /*
     <p>The stack's default VPC subnet ID. This parameter is required if you specify a value for the <code>VpcId</code> parameter. All instances are launched into this subnet unless you specify otherwise when you create the instance. If you also specify a value for <code>DefaultAvailabilityZone</code>, the subnet must be in that zone. For information on default values and when this parameter is required, see the <code>VpcId</code> parameter description. </p>
    */
    inline void SetDefaultSubnetId(const char* value) { m_defaultSubnetIdHasBeenSet = true; m_defaultSubnetId.assign(value); }

    /*
     <p>The stack's default VPC subnet ID. This parameter is required if you specify a value for the <code>VpcId</code> parameter. All instances are launched into this subnet unless you specify otherwise when you create the instance. If you also specify a value for <code>DefaultAvailabilityZone</code>, the subnet must be in that zone. For information on default values and when this parameter is required, see the <code>VpcId</code> parameter description. </p>
    */
    inline CreateStackRequest&  WithDefaultSubnetId(const Aws::String& value) { SetDefaultSubnetId(value); return *this;}

    /*
     <p>The stack's default VPC subnet ID. This parameter is required if you specify a value for the <code>VpcId</code> parameter. All instances are launched into this subnet unless you specify otherwise when you create the instance. If you also specify a value for <code>DefaultAvailabilityZone</code>, the subnet must be in that zone. For information on default values and when this parameter is required, see the <code>VpcId</code> parameter description. </p>
    */
    inline CreateStackRequest& WithDefaultSubnetId(const char* value) { SetDefaultSubnetId(value); return *this;}

    /*
     <p>A string that contains user-defined, custom JSON. It can be used to override the corresponding default stack configuration attribute values, or to pass data to recipes. The string should be in the following format and must escape characters such as '"'.:</p> <p> <code>"{\"key1\": \"value1\", \"key2\": \"value2\",...}"</code> </p> <p>For more information on custom JSON, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use Custom JSON to Modify the Stack Configuration Attributes</a>.</p>
    */
    inline const Aws::String& GetCustomJson() const{ return m_customJson; }
    /*
     <p>A string that contains user-defined, custom JSON. It can be used to override the corresponding default stack configuration attribute values, or to pass data to recipes. The string should be in the following format and must escape characters such as '"'.:</p> <p> <code>"{\"key1\": \"value1\", \"key2\": \"value2\",...}"</code> </p> <p>For more information on custom JSON, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use Custom JSON to Modify the Stack Configuration Attributes</a>.</p>
    */
    inline void SetCustomJson(const Aws::String& value) { m_customJsonHasBeenSet = true; m_customJson = value; }

    /*
     <p>A string that contains user-defined, custom JSON. It can be used to override the corresponding default stack configuration attribute values, or to pass data to recipes. The string should be in the following format and must escape characters such as '"'.:</p> <p> <code>"{\"key1\": \"value1\", \"key2\": \"value2\",...}"</code> </p> <p>For more information on custom JSON, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use Custom JSON to Modify the Stack Configuration Attributes</a>.</p>
    */
    inline void SetCustomJson(const char* value) { m_customJsonHasBeenSet = true; m_customJson.assign(value); }

    /*
     <p>A string that contains user-defined, custom JSON. It can be used to override the corresponding default stack configuration attribute values, or to pass data to recipes. The string should be in the following format and must escape characters such as '"'.:</p> <p> <code>"{\"key1\": \"value1\", \"key2\": \"value2\",...}"</code> </p> <p>For more information on custom JSON, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use Custom JSON to Modify the Stack Configuration Attributes</a>.</p>
    */
    inline CreateStackRequest&  WithCustomJson(const Aws::String& value) { SetCustomJson(value); return *this;}

    /*
     <p>A string that contains user-defined, custom JSON. It can be used to override the corresponding default stack configuration attribute values, or to pass data to recipes. The string should be in the following format and must escape characters such as '"'.:</p> <p> <code>"{\"key1\": \"value1\", \"key2\": \"value2\",...}"</code> </p> <p>For more information on custom JSON, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-json.html">Use Custom JSON to Modify the Stack Configuration Attributes</a>.</p>
    */
    inline CreateStackRequest& WithCustomJson(const char* value) { SetCustomJson(value); return *this;}

    /*
     <p>The configuration manager. When you clone a stack we recommend that you use the configuration manager to specify the Chef version, 0.9, 11.4, or 11.10. The default value is currently 11.4.</p>
    */
    inline const StackConfigurationManager& GetConfigurationManager() const{ return m_configurationManager; }
    /*
     <p>The configuration manager. When you clone a stack we recommend that you use the configuration manager to specify the Chef version, 0.9, 11.4, or 11.10. The default value is currently 11.4.</p>
    */
    inline void SetConfigurationManager(const StackConfigurationManager& value) { m_configurationManagerHasBeenSet = true; m_configurationManager = value; }

    /*
     <p>The configuration manager. When you clone a stack we recommend that you use the configuration manager to specify the Chef version, 0.9, 11.4, or 11.10. The default value is currently 11.4.</p>
    */
    inline CreateStackRequest&  WithConfigurationManager(const StackConfigurationManager& value) { SetConfigurationManager(value); return *this;}

    /*
     <p>A <code>ChefConfiguration</code> object that specifies whether to enable Berkshelf and the Berkshelf version on Chef 11.10 stacks. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-creating.html">Create a New Stack</a>.</p>
    */
    inline const ChefConfiguration& GetChefConfiguration() const{ return m_chefConfiguration; }
    /*
     <p>A <code>ChefConfiguration</code> object that specifies whether to enable Berkshelf and the Berkshelf version on Chef 11.10 stacks. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-creating.html">Create a New Stack</a>.</p>
    */
    inline void SetChefConfiguration(const ChefConfiguration& value) { m_chefConfigurationHasBeenSet = true; m_chefConfiguration = value; }

    /*
     <p>A <code>ChefConfiguration</code> object that specifies whether to enable Berkshelf and the Berkshelf version on Chef 11.10 stacks. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-creating.html">Create a New Stack</a>.</p>
    */
    inline CreateStackRequest&  WithChefConfiguration(const ChefConfiguration& value) { SetChefConfiguration(value); return *this;}

    /*
     <p>Whether the stack uses custom cookbooks.</p>
    */
    inline bool GetUseCustomCookbooks() const{ return m_useCustomCookbooks; }
    /*
     <p>Whether the stack uses custom cookbooks.</p>
    */
    inline void SetUseCustomCookbooks(bool value) { m_useCustomCookbooksHasBeenSet = true; m_useCustomCookbooks = value; }

    /*
     <p>Whether the stack uses custom cookbooks.</p>
    */
    inline CreateStackRequest&  WithUseCustomCookbooks(bool value) { SetUseCustomCookbooks(value); return *this;}

    /*
     <p>Whether to associate the AWS OpsWorks built-in security groups with the stack's layers.</p> <p>AWS OpsWorks provides a standard set of built-in security groups, one for each layer, which are associated with layers by default. With <code>UseOpsworksSecurityGroups</code> you can instead provide your own custom security groups. <code>UseOpsworksSecurityGroups</code> has the following settings: </p> <ul> <li>True - AWS OpsWorks automatically associates the appropriate built-in security group with each layer (default setting). You can associate additional security groups with a layer after you create it but you cannot delete the built-in security group. </li> <li>False - AWS OpsWorks does not associate built-in security groups with layers. You must create appropriate EC2 security groups and associate a security group with each layer that you create. However, you can still manually associate a built-in security group with a layer on creation; custom security groups are required only for those layers that need custom settings. </li> </ul> <p>For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-creating.html">Create a New Stack</a>.</p>
    */
    inline bool GetUseOpsworksSecurityGroups() const{ return m_useOpsworksSecurityGroups; }
    /*
     <p>Whether to associate the AWS OpsWorks built-in security groups with the stack's layers.</p> <p>AWS OpsWorks provides a standard set of built-in security groups, one for each layer, which are associated with layers by default. With <code>UseOpsworksSecurityGroups</code> you can instead provide your own custom security groups. <code>UseOpsworksSecurityGroups</code> has the following settings: </p> <ul> <li>True - AWS OpsWorks automatically associates the appropriate built-in security group with each layer (default setting). You can associate additional security groups with a layer after you create it but you cannot delete the built-in security group. </li> <li>False - AWS OpsWorks does not associate built-in security groups with layers. You must create appropriate EC2 security groups and associate a security group with each layer that you create. However, you can still manually associate a built-in security group with a layer on creation; custom security groups are required only for those layers that need custom settings. </li> </ul> <p>For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-creating.html">Create a New Stack</a>.</p>
    */
    inline void SetUseOpsworksSecurityGroups(bool value) { m_useOpsworksSecurityGroupsHasBeenSet = true; m_useOpsworksSecurityGroups = value; }

    /*
     <p>Whether to associate the AWS OpsWorks built-in security groups with the stack's layers.</p> <p>AWS OpsWorks provides a standard set of built-in security groups, one for each layer, which are associated with layers by default. With <code>UseOpsworksSecurityGroups</code> you can instead provide your own custom security groups. <code>UseOpsworksSecurityGroups</code> has the following settings: </p> <ul> <li>True - AWS OpsWorks automatically associates the appropriate built-in security group with each layer (default setting). You can associate additional security groups with a layer after you create it but you cannot delete the built-in security group. </li> <li>False - AWS OpsWorks does not associate built-in security groups with layers. You must create appropriate EC2 security groups and associate a security group with each layer that you create. However, you can still manually associate a built-in security group with a layer on creation; custom security groups are required only for those layers that need custom settings. </li> </ul> <p>For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workingstacks-creating.html">Create a New Stack</a>.</p>
    */
    inline CreateStackRequest&  WithUseOpsworksSecurityGroups(bool value) { SetUseOpsworksSecurityGroups(value); return *this;}

    
    inline const Source& GetCustomCookbooksSource() const{ return m_customCookbooksSource; }
    
    inline void SetCustomCookbooksSource(const Source& value) { m_customCookbooksSourceHasBeenSet = true; m_customCookbooksSource = value; }

    
    inline CreateStackRequest&  WithCustomCookbooksSource(const Source& value) { SetCustomCookbooksSource(value); return *this;}

    /*
     <p>A default Amazon EC2 key pair name. The default value is none. If you specify a key pair name, AWS OpsWorks installs the public key on the instance and you can use the private key with an SSH client to log in to the instance. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-ssh.html"> Using SSH to Communicate with an Instance</a> and <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/security-ssh-access.html"> Managing SSH Access</a>. You can override this setting by specifying a different key pair, or no key pair, when you <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-add.html"> create an instance</a>. </p>
    */
    inline const Aws::String& GetDefaultSshKeyName() const{ return m_defaultSshKeyName; }
    /*
     <p>A default Amazon EC2 key pair name. The default value is none. If you specify a key pair name, AWS OpsWorks installs the public key on the instance and you can use the private key with an SSH client to log in to the instance. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-ssh.html"> Using SSH to Communicate with an Instance</a> and <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/security-ssh-access.html"> Managing SSH Access</a>. You can override this setting by specifying a different key pair, or no key pair, when you <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-add.html"> create an instance</a>. </p>
    */
    inline void SetDefaultSshKeyName(const Aws::String& value) { m_defaultSshKeyNameHasBeenSet = true; m_defaultSshKeyName = value; }

    /*
     <p>A default Amazon EC2 key pair name. The default value is none. If you specify a key pair name, AWS OpsWorks installs the public key on the instance and you can use the private key with an SSH client to log in to the instance. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-ssh.html"> Using SSH to Communicate with an Instance</a> and <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/security-ssh-access.html"> Managing SSH Access</a>. You can override this setting by specifying a different key pair, or no key pair, when you <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-add.html"> create an instance</a>. </p>
    */
    inline void SetDefaultSshKeyName(const char* value) { m_defaultSshKeyNameHasBeenSet = true; m_defaultSshKeyName.assign(value); }

    /*
     <p>A default Amazon EC2 key pair name. The default value is none. If you specify a key pair name, AWS OpsWorks installs the public key on the instance and you can use the private key with an SSH client to log in to the instance. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-ssh.html"> Using SSH to Communicate with an Instance</a> and <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/security-ssh-access.html"> Managing SSH Access</a>. You can override this setting by specifying a different key pair, or no key pair, when you <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-add.html"> create an instance</a>. </p>
    */
    inline CreateStackRequest&  WithDefaultSshKeyName(const Aws::String& value) { SetDefaultSshKeyName(value); return *this;}

    /*
     <p>A default Amazon EC2 key pair name. The default value is none. If you specify a key pair name, AWS OpsWorks installs the public key on the instance and you can use the private key with an SSH client to log in to the instance. For more information, see <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-ssh.html"> Using SSH to Communicate with an Instance</a> and <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/security-ssh-access.html"> Managing SSH Access</a>. You can override this setting by specifying a different key pair, or no key pair, when you <a href="http://docs.aws.amazon.com/opsworks/latest/userguide/workinginstances-add.html"> create an instance</a>. </p>
    */
    inline CreateStackRequest& WithDefaultSshKeyName(const char* value) { SetDefaultSshKeyName(value); return *this;}

    /*
     <p>The default root device type. This value is used by default for all instances in the stack, but you can override it when you create an instance. The default option is <code>instance-store</code>. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage for the Root Device</a>.</p>
    */
    inline const RootDeviceType& GetDefaultRootDeviceType() const{ return m_defaultRootDeviceType; }
    /*
     <p>The default root device type. This value is used by default for all instances in the stack, but you can override it when you create an instance. The default option is <code>instance-store</code>. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage for the Root Device</a>.</p>
    */
    inline void SetDefaultRootDeviceType(const RootDeviceType& value) { m_defaultRootDeviceTypeHasBeenSet = true; m_defaultRootDeviceType = value; }

    /*
     <p>The default root device type. This value is used by default for all instances in the stack, but you can override it when you create an instance. The default option is <code>instance-store</code>. For more information, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ComponentsAMIs.html#storage-for-the-root-device">Storage for the Root Device</a>.</p>
    */
    inline CreateStackRequest&  WithDefaultRootDeviceType(const RootDeviceType& value) { SetDefaultRootDeviceType(value); return *this;}

  private:
    Aws::String m_name;
    Aws::String m_region;
    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;
    Aws::Map<StackAttributesKeys, Aws::String> m_attributes;
    bool m_attributesHasBeenSet;
    Aws::String m_serviceRoleArn;
    Aws::String m_defaultInstanceProfileArn;
    Aws::String m_defaultOs;
    bool m_defaultOsHasBeenSet;
    Aws::String m_hostnameTheme;
    bool m_hostnameThemeHasBeenSet;
    Aws::String m_defaultAvailabilityZone;
    bool m_defaultAvailabilityZoneHasBeenSet;
    Aws::String m_defaultSubnetId;
    bool m_defaultSubnetIdHasBeenSet;
    Aws::String m_customJson;
    bool m_customJsonHasBeenSet;
    StackConfigurationManager m_configurationManager;
    bool m_configurationManagerHasBeenSet;
    ChefConfiguration m_chefConfiguration;
    bool m_chefConfigurationHasBeenSet;
    bool m_useCustomCookbooks;
    bool m_useCustomCookbooksHasBeenSet;
    bool m_useOpsworksSecurityGroups;
    bool m_useOpsworksSecurityGroupsHasBeenSet;
    Source m_customCookbooksSource;
    bool m_customCookbooksSourceHasBeenSet;
    Aws::String m_defaultSshKeyName;
    bool m_defaultSshKeyNameHasBeenSet;
    RootDeviceType m_defaultRootDeviceType;
    bool m_defaultRootDeviceTypeHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws