/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_268.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1340(t_small_parse_table_array *v)
{
	v->a[26800] = sym_word;
	v->a[26801] = anon_sym_SEMI;
	v->a[26802] = 13;
	v->a[26803] = actions(3);
	v->a[26804] = 1;
	v->a[26805] = sym_comment;
	v->a[26806] = actions(807);
	v->a[26807] = 1;
	v->a[26808] = anon_sym_PIPE;
	v->a[26809] = actions(811);
	v->a[26810] = 1;
	v->a[26811] = sym_file_descriptor;
	v->a[26812] = actions(840);
	v->a[26813] = 1;
	v->a[26814] = anon_sym_SEMI_SEMI;
	v->a[26815] = actions(863);
	v->a[26816] = 1;
	v->a[26817] = aux_sym_heredoc_redirect_token1;
	v->a[26818] = actions(865);
	v->a[26819] = 1;
	small_parse_table_1341(v);
}

void	small_parse_table_1341(t_small_parse_table_array *v)
{
	v->a[26820] = anon_sym_AMP;
	v->a[26821] = actions(867);
	v->a[26822] = 1;
	v->a[26823] = anon_sym_SEMI;
	v->a[26824] = actions(967);
	v->a[26825] = 1;
	v->a[26826] = sym_variable_name;
	v->a[26827] = actions(861);
	v->a[26828] = 2;
	v->a[26829] = anon_sym_LT_LT;
	v->a[26830] = anon_sym_LT_LT_DASH;
	v->a[26831] = actions(965);
	v->a[26832] = 2;
	v->a[26833] = anon_sym_AMP_AMP;
	v->a[26834] = anon_sym_PIPE_PIPE;
	v->a[26835] = state(1415);
	v->a[26836] = 2;
	v->a[26837] = sym_variable_assignment;
	v->a[26838] = aux_sym_variable_assignments_repeat1;
	v->a[26839] = state(1322);
	small_parse_table_1342(v);
}

void	small_parse_table_1342(t_small_parse_table_array *v)
{
	v->a[26840] = 3;
	v->a[26841] = sym_file_redirect;
	v->a[26842] = sym_heredoc_redirect;
	v->a[26843] = aux_sym_redirected_statement_repeat1;
	v->a[26844] = actions(805);
	v->a[26845] = 19;
	v->a[26846] = anon_sym_LT;
	v->a[26847] = anon_sym_GT;
	v->a[26848] = anon_sym_GT_GT;
	v->a[26849] = anon_sym_AMP_GT;
	v->a[26850] = anon_sym_AMP_GT_GT;
	v->a[26851] = anon_sym_LT_AMP;
	v->a[26852] = anon_sym_GT_AMP;
	v->a[26853] = anon_sym_GT_PIPE;
	v->a[26854] = anon_sym_LT_AMP_DASH;
	v->a[26855] = anon_sym_GT_AMP_DASH;
	v->a[26856] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26857] = anon_sym_DOLLAR;
	v->a[26858] = anon_sym_DQUOTE;
	v->a[26859] = sym_raw_string;
	small_parse_table_1343(v);
}

void	small_parse_table_1343(t_small_parse_table_array *v)
{
	v->a[26860] = sym_number;
	v->a[26861] = anon_sym_DOLLAR_LBRACE;
	v->a[26862] = anon_sym_DOLLAR_LPAREN;
	v->a[26863] = anon_sym_BQUOTE;
	v->a[26864] = sym_word;
	v->a[26865] = 7;
	v->a[26866] = actions(3);
	v->a[26867] = 1;
	v->a[26868] = sym_comment;
	v->a[26869] = actions(986);
	v->a[26870] = 1;
	v->a[26871] = anon_sym_LPAREN;
	v->a[26872] = actions(989);
	v->a[26873] = 1;
	v->a[26874] = aux_sym_concatenation_token1;
	v->a[26875] = actions(993);
	v->a[26876] = 1;
	v->a[26877] = sym__concat;
	v->a[26878] = state(296);
	v->a[26879] = 1;
	small_parse_table_1344(v);
}

void	small_parse_table_1344(t_small_parse_table_array *v)
{
	v->a[26880] = aux_sym_concatenation_repeat1;
	v->a[26881] = actions(991);
	v->a[26882] = 2;
	v->a[26883] = sym_file_descriptor;
	v->a[26884] = sym__bare_dollar;
	v->a[26885] = actions(984);
	v->a[26886] = 29;
	v->a[26887] = anon_sym_PIPE;
	v->a[26888] = anon_sym_RPAREN;
	v->a[26889] = anon_sym_SEMI_SEMI;
	v->a[26890] = anon_sym_AMP_AMP;
	v->a[26891] = anon_sym_PIPE_PIPE;
	v->a[26892] = anon_sym_LT;
	v->a[26893] = anon_sym_GT;
	v->a[26894] = anon_sym_GT_GT;
	v->a[26895] = anon_sym_AMP_GT;
	v->a[26896] = anon_sym_AMP_GT_GT;
	v->a[26897] = anon_sym_LT_AMP;
	v->a[26898] = anon_sym_GT_AMP;
	v->a[26899] = anon_sym_GT_PIPE;
	small_parse_table_1345(v);
}

/* EOF small_parse_table_268.c */
