# Security Policy

# Policy Title

`0.1.0`

Overview of the policy. A paragraph or two to describe the intent and
principals of the policy before you eyes.

## Policy Statement Format

This section contains the high level requirements specific to the policy.

Policy statements are aligned to the organization's operating model and
applicable compliance requirements. These statements describe the "what"
but not the "how". They are meant to be stable over longer periods of time 
without needing frequent updates kinda how you would use a design pattern
in a suffocated software system.

# Compliance Audits and External Communications

Mike Net may be requested occasionally to share additional details
regarding its compliance, privacy and security program by an external
entity such as a customer, media, legal or law enforcement.  Such external
communication, beyond what is already publicly published, needs to comply
with the following policies and procedures.

## Policy Statements

Mike Net policy requires that:

(a) Mike Net operations must comply with all applicable laws,
regulations, security standards and frameworks. External audits shall be
conducted accordingly to each applicable compliance requirement.

-   HIPAA/HITECH. Mike Net must comply with all requirements listed
    in the HIPAA (Health Insurance Portability and Accountability Act of 1996)
    and the Health Information Technology for Economic and Clinical Health
    (HITECH) Act.

-   HITRUST. Mike Net security program and controls are aligned with
    the HITRUST Common Security Framework (CSF).

-   GDPR. Mike Net must protect the personal data and privacy of EU
    citizens according to the regulatory requirements set forth in the European
    Union General Data Protection Regulation (GDPR).

-   NIST. Mike Net security shall implement the applicable controls
    outlined in NIST Special Publication 800-53.

-   PCI. Mike Net must protect the payment card data processed
    and/or stored according to the requirements in the latest Payment Card
    Industry Data Security Standard (PCI DSS).

(b) All external communications related to compliance and customer/employee
privacy must follow pre-established procedures and handled by approved
personnel. This includes but is not limited to distribution of audit reports,
assessment results, incidents and breach notification.

(c) Audit and compliance reports may be shared with an external party only when
under signed NDA and approved by Mike Net Security and/or Privacy Officer.

### Access Reviews

-   All access to Mike Net based systems and services are reviewed and updated following
    the procedures specified in [System Auditing](system-audit.md) to ensure proper
    authorizations are in place commensurate with job functions.
-   In cases of increased risk or known attempted unauthorized access, immediate
    steps are taken by the Security and Privacy Officer to limit access and reduce
    risk of unauthorized access.

### Secure Design and Application Threat Modeling

Mike Net Security Team in collaboration with development team performs full
Application Threat Modeling and Risk Assessment on per-application basis using a
custom approach that relies on industry standards and best practices.

Major application updates are captured via an **RFC** process.  The RFC
template includes **Security Consideration** as a required section.  This 
section is used to document abuse cases including: 

-   risks identified, 
-   attack vectors, and 
-   mitigating controls. 

Each RFC is required to capture sufficient details of the feature/component to
be developed, including use cases, motivation and outcome, and the following
design details as applicable:

-   authentication/authorization mechanisms, 
-   network communications, 
-   data encryption,
-   cloud services used,
-   logging/auditing, 
-   data flow diagram/description,
-   edge cases, drawbacks, and alternatives.

The RFC must be approved prior to implementation.  Security team is included in
RFC reviews via the pull request process.
