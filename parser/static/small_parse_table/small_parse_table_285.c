/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_285.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1425(t_small_parse_table_array *v)
{
	v->a[28500] = 2;
	v->a[28501] = anon_sym_LT_LT;
	v->a[28502] = anon_sym_LT_LT_DASH;
	v->a[28503] = actions(1093);
	v->a[28504] = 2;
	v->a[28505] = anon_sym_AMP_AMP;
	v->a[28506] = anon_sym_PIPE_PIPE;
	v->a[28507] = state(1151);
	v->a[28508] = 2;
	v->a[28509] = sym_variable_assignment;
	v->a[28510] = aux_sym_variable_assignments_repeat1;
	v->a[28511] = state(1160);
	v->a[28512] = 3;
	v->a[28513] = sym_file_redirect;
	v->a[28514] = sym_heredoc_redirect;
	v->a[28515] = aux_sym_redirected_statement_repeat1;
	v->a[28516] = actions(1122);
	v->a[28517] = 4;
	v->a[28518] = anon_sym_SEMI_SEMI;
	v->a[28519] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1426(v);
}

void	small_parse_table_1426(t_small_parse_table_array *v)
{
	v->a[28520] = anon_sym_AMP;
	v->a[28521] = anon_sym_SEMI;
	v->a[28522] = actions(1000);
	v->a[28523] = 20;
	v->a[28524] = anon_sym_LT;
	v->a[28525] = anon_sym_GT;
	v->a[28526] = anon_sym_GT_GT;
	v->a[28527] = anon_sym_AMP_GT;
	v->a[28528] = anon_sym_AMP_GT_GT;
	v->a[28529] = anon_sym_LT_AMP;
	v->a[28530] = anon_sym_GT_AMP;
	v->a[28531] = anon_sym_GT_PIPE;
	v->a[28532] = anon_sym_LT_AMP_DASH;
	v->a[28533] = anon_sym_GT_AMP_DASH;
	v->a[28534] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28535] = anon_sym_DOLLAR;
	v->a[28536] = anon_sym_DQUOTE;
	v->a[28537] = sym_raw_string;
	v->a[28538] = aux_sym_number_token1;
	v->a[28539] = aux_sym_number_token2;
	small_parse_table_1427(v);
}

void	small_parse_table_1427(t_small_parse_table_array *v)
{
	v->a[28540] = anon_sym_DOLLAR_LBRACE;
	v->a[28541] = anon_sym_DOLLAR_LPAREN;
	v->a[28542] = anon_sym_BQUOTE;
	v->a[28543] = sym_word;
	v->a[28544] = 7;
	v->a[28545] = actions(3);
	v->a[28546] = 1;
	v->a[28547] = sym_comment;
	v->a[28548] = actions(1081);
	v->a[28549] = 1;
	v->a[28550] = sym_file_descriptor;
	v->a[28551] = actions(1124);
	v->a[28552] = 1;
	v->a[28553] = sym_variable_name;
	v->a[28554] = state(1011);
	v->a[28555] = 2;
	v->a[28556] = sym_variable_assignment;
	v->a[28557] = aux_sym_variable_assignments_repeat1;
	v->a[28558] = state(1095);
	v->a[28559] = 3;
	small_parse_table_1428(v);
}

void	small_parse_table_1428(t_small_parse_table_array *v)
{
	v->a[28560] = sym_file_redirect;
	v->a[28561] = sym_heredoc_redirect;
	v->a[28562] = aux_sym_redirected_statement_repeat1;
	v->a[28563] = actions(1000);
	v->a[28564] = 9;
	v->a[28565] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28566] = anon_sym_DOLLAR;
	v->a[28567] = anon_sym_DQUOTE;
	v->a[28568] = sym_raw_string;
	v->a[28569] = aux_sym_number_token1;
	v->a[28570] = aux_sym_number_token2;
	v->a[28571] = anon_sym_DOLLAR_LBRACE;
	v->a[28572] = anon_sym_DOLLAR_LPAREN;
	v->a[28573] = sym_word;
	v->a[28574] = actions(1002);
	v->a[28575] = 20;
	v->a[28576] = anon_sym_PIPE;
	v->a[28577] = anon_sym_SEMI_SEMI;
	v->a[28578] = anon_sym_AMP_AMP;
	v->a[28579] = anon_sym_PIPE_PIPE;
	small_parse_table_1429(v);
}

void	small_parse_table_1429(t_small_parse_table_array *v)
{
	v->a[28580] = anon_sym_LT;
	v->a[28581] = anon_sym_GT;
	v->a[28582] = anon_sym_GT_GT;
	v->a[28583] = anon_sym_AMP_GT;
	v->a[28584] = anon_sym_AMP_GT_GT;
	v->a[28585] = anon_sym_LT_AMP;
	v->a[28586] = anon_sym_GT_AMP;
	v->a[28587] = anon_sym_GT_PIPE;
	v->a[28588] = anon_sym_LT_AMP_DASH;
	v->a[28589] = anon_sym_GT_AMP_DASH;
	v->a[28590] = anon_sym_LT_LT;
	v->a[28591] = anon_sym_LT_LT_DASH;
	v->a[28592] = aux_sym_heredoc_redirect_token1;
	v->a[28593] = anon_sym_AMP;
	v->a[28594] = anon_sym_BQUOTE;
	v->a[28595] = anon_sym_SEMI;
	v->a[28596] = 6;
	v->a[28597] = actions(3);
	v->a[28598] = 1;
	v->a[28599] = sym_comment;
	small_parse_table_1430(v);
}

/* EOF small_parse_table_285.c */
