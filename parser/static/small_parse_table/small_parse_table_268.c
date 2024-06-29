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
	v->a[26800] = actions(851);
	v->a[26801] = 2;
	v->a[26802] = anon_sym_AMP_AMP;
	v->a[26803] = anon_sym_PIPE_PIPE;
	v->a[26804] = actions(855);
	v->a[26805] = 2;
	v->a[26806] = anon_sym_LT_AMP_DASH;
	v->a[26807] = anon_sym_GT_AMP_DASH;
	v->a[26808] = state(1493);
	v->a[26809] = 2;
	v->a[26810] = sym_file_redirect;
	v->a[26811] = aux_sym_redirected_statement_repeat2;
	v->a[26812] = actions(847);
	v->a[26813] = 3;
	v->a[26814] = sym_raw_string;
	v->a[26815] = sym_number;
	v->a[26816] = sym_word;
	v->a[26817] = state(1788);
	v->a[26818] = 5;
	v->a[26819] = sym_arithmetic_expansion;
	small_parse_table_1341(v);
}

void	small_parse_table_1341(t_small_parse_table_array *v)
{
	v->a[26820] = sym_string;
	v->a[26821] = sym_simple_expansion;
	v->a[26822] = sym_expansion;
	v->a[26823] = sym_command_substitution;
	v->a[26824] = actions(853);
	v->a[26825] = 8;
	v->a[26826] = anon_sym_LT;
	v->a[26827] = anon_sym_GT;
	v->a[26828] = anon_sym_GT_GT;
	v->a[26829] = anon_sym_AMP_GT;
	v->a[26830] = anon_sym_AMP_GT_GT;
	v->a[26831] = anon_sym_LT_AMP;
	v->a[26832] = anon_sym_GT_AMP;
	v->a[26833] = anon_sym_GT_PIPE;
	v->a[26834] = 11;
	v->a[26835] = actions(3);
	v->a[26836] = 1;
	v->a[26837] = sym_comment;
	v->a[26838] = actions(766);
	v->a[26839] = 1;
	small_parse_table_1342(v);
}

void	small_parse_table_1342(t_small_parse_table_array *v)
{
	v->a[26840] = anon_sym_PIPE;
	v->a[26841] = actions(774);
	v->a[26842] = 1;
	v->a[26843] = sym_file_descriptor;
	v->a[26844] = actions(895);
	v->a[26845] = 1;
	v->a[26846] = sym_variable_name;
	v->a[26847] = state(615);
	v->a[26848] = 1;
	v->a[26849] = sym_terminator;
	v->a[26850] = actions(804);
	v->a[26851] = 2;
	v->a[26852] = anon_sym_LT_LT;
	v->a[26853] = anon_sym_LT_LT_DASH;
	v->a[26854] = actions(893);
	v->a[26855] = 2;
	v->a[26856] = anon_sym_AMP_AMP;
	v->a[26857] = anon_sym_PIPE_PIPE;
	v->a[26858] = state(1270);
	v->a[26859] = 2;
	small_parse_table_1343(v);
}

void	small_parse_table_1343(t_small_parse_table_array *v)
{
	v->a[26860] = sym_variable_assignment;
	v->a[26861] = aux_sym__variable_assignments_repeat1;
	v->a[26862] = state(1256);
	v->a[26863] = 3;
	v->a[26864] = sym_file_redirect;
	v->a[26865] = sym_heredoc_redirect;
	v->a[26866] = aux_sym_redirected_statement_repeat1;
	v->a[26867] = actions(949);
	v->a[26868] = 4;
	v->a[26869] = anon_sym_SEMI_SEMI;
	v->a[26870] = aux_sym_heredoc_redirect_token1;
	v->a[26871] = anon_sym_AMP;
	v->a[26872] = anon_sym_SEMI;
	v->a[26873] = actions(762);
	v->a[26874] = 19;
	v->a[26875] = anon_sym_LT;
	v->a[26876] = anon_sym_GT;
	v->a[26877] = anon_sym_GT_GT;
	v->a[26878] = anon_sym_AMP_GT;
	v->a[26879] = anon_sym_AMP_GT_GT;
	small_parse_table_1344(v);
}

void	small_parse_table_1344(t_small_parse_table_array *v)
{
	v->a[26880] = anon_sym_LT_AMP;
	v->a[26881] = anon_sym_GT_AMP;
	v->a[26882] = anon_sym_GT_PIPE;
	v->a[26883] = anon_sym_LT_AMP_DASH;
	v->a[26884] = anon_sym_GT_AMP_DASH;
	v->a[26885] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26886] = anon_sym_DOLLAR;
	v->a[26887] = anon_sym_DQUOTE;
	v->a[26888] = sym_raw_string;
	v->a[26889] = sym_number;
	v->a[26890] = anon_sym_DOLLAR_LBRACE;
	v->a[26891] = anon_sym_DOLLAR_LPAREN;
	v->a[26892] = anon_sym_BQUOTE;
	v->a[26893] = sym_word;
	v->a[26894] = 11;
	v->a[26895] = actions(3);
	v->a[26896] = 1;
	v->a[26897] = sym_comment;
	v->a[26898] = actions(766);
	v->a[26899] = 1;
	small_parse_table_1345(v);
}

/* EOF small_parse_table_268.c */
