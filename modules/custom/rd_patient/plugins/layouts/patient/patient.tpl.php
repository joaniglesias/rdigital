<?php
  $path = current_path();
  $path_params = explode("/", $path);
  $patient_nid = $path_params[1];
?>

<div id="layout-patient" >


  <!-- Patient Region -->
  <?php $reg_machine_name='patient'; ?>

  <div class="stat-panel">
    <div class="stat-cell no-bg bordered valign-middle">
      <i class="fa fa-user bg-icon"></i>
      <span>
        <?php print $content['patient']; ?>
      </span>
    </div>
  </div>

  <div class="panel-group" role="tablist" aria-multiselectable="true">

    <!-- Patient Details Region -->
    <?php $reg_machine_name='patient-details';
    if (user_access('view patient panel patient details region')) { ?>
    <div class="panel panel-rd-blue">

      <div class="panel-heading clearfix" role="tab" id="heading-<?php print $reg_machine_name; ?>">
        <a class="btn btn-rd-dark-blue pull-right" data-toggle="collapse" href="#collapse-<?php print $reg_machine_name; ?>" aria-expanded="false" aria-controls="collapseOne">
          <span class="glyphicon accordion-toggle" aria-hidden="true">
          </span>
        </a>
        <h4 class="panel-title" style="margin-top: 7.5px;">
          <?php print t('Patient Details'); ?>
        </h4>
      </div>
      <div id="collapse-<?php print $reg_machine_name; ?>" class="panel-collapse collapse in" role="tabpanel" aria-labelledby="heading-<?php print $reg_machine_name; ?>">
        <div class="panel-body row">
          <div class="col-xs-4">
            <?php print $content['patient_details_left']; ?>
          </div>
          <div class="col-xs-4">
            <?php print $content['patient_details_middle']; ?>
          </div>
          <div class="col-xs-4">
            <!-- Incidences Region -->
            <?php $incidences_bg = " " . (empty($content['patient_details_right']) ? "" : "bg-warning" ); ?>
            <div class="stat-panel<?php print $incidences_bg; ?>" id="incidences">
              <div class="stat-cell no-bg bordered valign-middle">
<!--                 <p class="text-uppercase bold">
                  <strong><?php print t('Incidences'); ?></strong>
                </p> -->
                <i class="fa fa-exclamation-circle bg-icon"></i>
                <span>
                  <?php print $content['patient_details_right']; ?>
                </span>
              </div>
            </div>
          </div>
        </div>
      </div>
    </div>
    <? } ?>

    <!-- Form Region -->
    <?php $reg_machine_name='rdforms';
    if (user_access('view patient panel forms region')) { ?>
    <div class="panel panel-rd-blue">
      <div class="panel-heading clearfix" role="tab" id="heading-<?php print $reg_machine_name; ?>">
        <div class="pull-right">
          <a class="btn btn-rd-dark-blue" data-toggle="modal" data-target="#CreateForm">
          <?php print t('Create Form'); ?>
          </a>
          <a class="btn btn-rd-dark-blue" data-toggle="collapse" href="#collapse-<?php print $reg_machine_name; ?>" aria-expanded="false" aria-controls="collapseOne">
            <span class="glyphicon accordion-toggle" aria-hidden="true">
            </span>
          </a>
        </div>
        <h4 class="panel-title" style="margin-top: 7.5px;">
          <?php print $layout['regions'][$reg_machine_name]; ?>
        </h4>
      </div>
      <div id="collapse-<?php print $reg_machine_name; ?>" class="panel-collapse collapse in" role="tabpanel" aria-labelledby="heading-<?php print $reg_machine_name; ?>">
        <div class="panel-body">
          <?php print $content[$reg_machine_name]; ?>
        </div>
      </div>
    </div>
    <? } ?>

    <!-- Measures Record Region -->
    <?php $reg_machine_name='measures_record'; ?>
    <div class="panel panel-rd-green">
      <div class="panel-heading clearfix" role="tab" id="heading-<?php print $reg_machine_name; ?>">
        <a class="btn btn-success pull-right" data-toggle="collapse" href="#collapse-<?php print $reg_machine_name; ?>" aria-expanded="false" aria-controls="collapseOne">
          <span class="glyphicon accordion-toggle" aria-hidden="true">
          </span>
        </a>
        <h4 class="panel-title" style="margin-top: 7.5px;">
          <?php print $layout['regions'][$reg_machine_name]; ?>
        </h4>
      </div>
      <div id="collapse-<?php print $reg_machine_name; ?>" class="panel-collapse collapse in" role="tabpanel" aria-labelledby="heading-<?php print $reg_machine_name; ?>">
        <div class="panel-body">
          <?php print $content[$reg_machine_name]; ?>
        </div>
      </div>
    </div>
  </div>
  <?php //dpm(get_defined_vars()); ?>

  <!-- Patient Actions Region -->
  <?php $reg_machine_name='treatment_actions';
    if (user_access('view patient panel actions region')) { ?>
  <div class="panel panel-default">
    <div class="panel-heading clearfix no-bg panel-padding" role="tab" id="heading-<?php print $reg_machine_name; ?>">
      <div class="pull-right">
        <a class="btn btn-success btn-lg btn-labeled" href="<?php print $patient_nid; ?>/create-treatment">
          <span class="btn-label icon fa fa-check"></span>
          <?php print t('Create Treatment'); ?>
        </a>
      </div>
      <h4 class="text-default text-lg text-semibold" style="margin-top: 7.5px;">
        <?php print t('ACTIONS'); ?>
      </h4>
    </div>
  </div>
  <? } ?>



  <!-- Modal Create Form -->
  <div class="modal fade in" id="CreateForm" tabindex="-1" role="dialog" aria-labelledby="myModalLabel" aria-hidden="false">
    <div class="modal-dialog animated shake">
      <div class="modal-content">
        <div class="modal-header bg-rd-blue">
          <button type="button" class="close" data-dismiss="modal" aria-label="Close"><span aria-hidden="true">&times;</span></button>
          <h4 class="modal-title" id="myModalLabel">
            <?php print t('Create Form'); ?>
          </h4>
        </div>
        <div class="modal-body"><div class="te"></div>
          <?php print $content['rdforms_actions']; ?>
        </div>
  <!--      <div class="modal-footer">
          <button type="button" class="btn btn-default" data-dismiss="modal">Close</button>
          <button type="button" class="btn btn-primary">Save changes</button>
        </div>-->
      </div>
    </div>
  </div>

</div>

