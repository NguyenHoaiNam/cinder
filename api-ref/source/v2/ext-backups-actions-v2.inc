.. -*- rst -*-

================================
Backup actions (backups, action)
================================

Force-deletes a backup.


Force-delete backup
===================

.. rest_method::  POST /v2/{tenant_id}/backups/{backup_id}/action

Force-deletes a backup. Specify the ``os-force_delete`` action in the request body.

This operations deletes the backup and any backup data.

The backup driver returns the ``405`` status code if it does not
support this operation.

Normal response codes: 202,

Error response codes:404,405,


Request
-------

.. rest_parameters:: parameters.yaml

   - os-force_delete: os-force_delete
   - tenant_id: tenant_id
   - backup_id: backup_id

Request Example
---------------

.. literalinclude:: ./samples/backup-force-delete-request.json
   :language: javascript
