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
	v->a[28500] = sym_file_descriptor;
	v->a[28501] = actions(1039);
	v->a[28502] = 1;
	v->a[28503] = sym_variable_name;
	v->a[28504] = actions(1037);
	v->a[28505] = 2;
	v->a[28506] = aux_sym__simple_variable_name_token1;
	v->a[28507] = aux_sym__multiline_variable_name_token1;
	v->a[28508] = actions(1035);
	v->a[28509] = 9;
	v->a[28510] = anon_sym_BANG;
	v->a[28511] = anon_sym_DASH;
	v->a[28512] = anon_sym_STAR;
	v->a[28513] = anon_sym_QMARK;
	v->a[28514] = anon_sym_DOLLAR;
	v->a[28515] = anon_sym_POUND;
	v->a[28516] = anon_sym_AT;
	v->a[28517] = anon_sym_0;
	v->a[28518] = anon_sym__;
	v->a[28519] = actions(361);
	small_parse_table_1426(v);
}

void	small_parse_table_1426(t_small_parse_table_array *v)
{
	v->a[28520] = 20;
	v->a[28521] = anon_sym_PIPE;
	v->a[28522] = anon_sym_AMP_AMP;
	v->a[28523] = anon_sym_PIPE_PIPE;
	v->a[28524] = anon_sym_LT;
	v->a[28525] = anon_sym_GT;
	v->a[28526] = anon_sym_GT_GT;
	v->a[28527] = anon_sym_LT_AMP;
	v->a[28528] = anon_sym_GT_AMP;
	v->a[28529] = anon_sym_GT_PIPE;
	v->a[28530] = anon_sym_LT_GT;
	v->a[28531] = anon_sym_LT_LT;
	v->a[28532] = anon_sym_LT_LT_DASH;
	v->a[28533] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28534] = anon_sym_DQUOTE;
	v->a[28535] = sym_raw_string;
	v->a[28536] = sym_number;
	v->a[28537] = anon_sym_DOLLAR_LBRACE;
	v->a[28538] = anon_sym_DOLLAR_LPAREN;
	v->a[28539] = anon_sym_BQUOTE;
	small_parse_table_1427(v);
}

void	small_parse_table_1427(t_small_parse_table_array *v)
{
	v->a[28540] = sym_word;
	v->a[28541] = 11;
	v->a[28542] = actions(3);
	v->a[28543] = 1;
	v->a[28544] = sym_comment;
	v->a[28545] = actions(736);
	v->a[28546] = 1;
	v->a[28547] = anon_sym_PIPE;
	v->a[28548] = actions(746);
	v->a[28549] = 1;
	v->a[28550] = sym_file_descriptor;
	v->a[28551] = actions(957);
	v->a[28552] = 1;
	v->a[28553] = sym_variable_name;
	v->a[28554] = state(621);
	v->a[28555] = 1;
	v->a[28556] = sym_terminator;
	v->a[28557] = actions(744);
	v->a[28558] = 2;
	v->a[28559] = anon_sym_LT_LT;
	small_parse_table_1428(v);
}

void	small_parse_table_1428(t_small_parse_table_array *v)
{
	v->a[28560] = anon_sym_LT_LT_DASH;
	v->a[28561] = actions(955);
	v->a[28562] = 2;
	v->a[28563] = anon_sym_AMP_AMP;
	v->a[28564] = anon_sym_PIPE_PIPE;
	v->a[28565] = state(1134);
	v->a[28566] = 2;
	v->a[28567] = sym_variable_assignment;
	v->a[28568] = aux_sym__variable_assignments_repeat1;
	v->a[28569] = state(1194);
	v->a[28570] = 3;
	v->a[28571] = sym_file_redirect;
	v->a[28572] = sym_heredoc_redirect;
	v->a[28573] = aux_sym_redirected_statement_repeat1;
	v->a[28574] = actions(740);
	v->a[28575] = 4;
	v->a[28576] = anon_sym_SEMI_SEMI;
	v->a[28577] = aux_sym_heredoc_redirect_token1;
	v->a[28578] = anon_sym_AMP;
	v->a[28579] = anon_sym_SEMI;
	small_parse_table_1429(v);
}

void	small_parse_table_1429(t_small_parse_table_array *v)
{
	v->a[28580] = actions(734);
	v->a[28581] = 16;
	v->a[28582] = anon_sym_LT;
	v->a[28583] = anon_sym_GT;
	v->a[28584] = anon_sym_GT_GT;
	v->a[28585] = anon_sym_LT_AMP;
	v->a[28586] = anon_sym_GT_AMP;
	v->a[28587] = anon_sym_GT_PIPE;
	v->a[28588] = anon_sym_LT_GT;
	v->a[28589] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[28590] = anon_sym_DOLLAR;
	v->a[28591] = anon_sym_DQUOTE;
	v->a[28592] = sym_raw_string;
	v->a[28593] = sym_number;
	v->a[28594] = anon_sym_DOLLAR_LBRACE;
	v->a[28595] = anon_sym_DOLLAR_LPAREN;
	v->a[28596] = anon_sym_BQUOTE;
	v->a[28597] = sym_word;
	v->a[28598] = 11;
	v->a[28599] = actions(3);
	small_parse_table_1430(v);
}

/* EOF small_parse_table_285.c */
