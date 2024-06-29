/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_238.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1190(t_small_parse_table_array *v)
{
	v->a[23800] = sym_file_descriptor;
	v->a[23801] = actions(776);
	v->a[23802] = 1;
	v->a[23803] = sym_variable_name;
	v->a[23804] = state(688);
	v->a[23805] = 1;
	v->a[23806] = sym_terminator;
	v->a[23807] = actions(768);
	v->a[23808] = 2;
	v->a[23809] = anon_sym_AMP_AMP;
	v->a[23810] = anon_sym_PIPE_PIPE;
	v->a[23811] = actions(770);
	v->a[23812] = 2;
	v->a[23813] = anon_sym_LT_LT;
	v->a[23814] = anon_sym_LT_LT_DASH;
	v->a[23815] = actions(809);
	v->a[23816] = 2;
	v->a[23817] = anon_sym_esac;
	v->a[23818] = anon_sym_SEMI_SEMI;
	v->a[23819] = state(1136);
	small_parse_table_1191(v);
}

void	small_parse_table_1191(t_small_parse_table_array *v)
{
	v->a[23820] = 2;
	v->a[23821] = sym_variable_assignment;
	v->a[23822] = aux_sym__variable_assignments_repeat1;
	v->a[23823] = actions(772);
	v->a[23824] = 3;
	v->a[23825] = aux_sym_heredoc_redirect_token1;
	v->a[23826] = anon_sym_AMP;
	v->a[23827] = anon_sym_SEMI;
	v->a[23828] = state(1123);
	v->a[23829] = 3;
	v->a[23830] = sym_file_redirect;
	v->a[23831] = sym_heredoc_redirect;
	v->a[23832] = aux_sym_redirected_statement_repeat1;
	v->a[23833] = actions(762);
	v->a[23834] = 19;
	v->a[23835] = anon_sym_LT;
	v->a[23836] = anon_sym_GT;
	v->a[23837] = anon_sym_GT_GT;
	v->a[23838] = anon_sym_AMP_GT;
	v->a[23839] = anon_sym_AMP_GT_GT;
	small_parse_table_1192(v);
}

void	small_parse_table_1192(t_small_parse_table_array *v)
{
	v->a[23840] = anon_sym_LT_AMP;
	v->a[23841] = anon_sym_GT_AMP;
	v->a[23842] = anon_sym_GT_PIPE;
	v->a[23843] = anon_sym_LT_AMP_DASH;
	v->a[23844] = anon_sym_GT_AMP_DASH;
	v->a[23845] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23846] = anon_sym_DOLLAR;
	v->a[23847] = anon_sym_DQUOTE;
	v->a[23848] = sym_raw_string;
	v->a[23849] = sym_number;
	v->a[23850] = anon_sym_DOLLAR_LBRACE;
	v->a[23851] = anon_sym_DOLLAR_LPAREN;
	v->a[23852] = anon_sym_BQUOTE;
	v->a[23853] = sym_word;
	v->a[23854] = 12;
	v->a[23855] = actions(3);
	v->a[23856] = 1;
	v->a[23857] = sym_comment;
	v->a[23858] = actions(548);
	v->a[23859] = 1;
	small_parse_table_1193(v);
}

void	small_parse_table_1193(t_small_parse_table_array *v)
{
	v->a[23860] = sym_file_descriptor;
	v->a[23861] = actions(813);
	v->a[23862] = 1;
	v->a[23863] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23864] = actions(815);
	v->a[23865] = 1;
	v->a[23866] = anon_sym_DOLLAR;
	v->a[23867] = actions(817);
	v->a[23868] = 1;
	v->a[23869] = anon_sym_DQUOTE;
	v->a[23870] = actions(819);
	v->a[23871] = 1;
	v->a[23872] = anon_sym_DOLLAR_LBRACE;
	v->a[23873] = actions(821);
	v->a[23874] = 1;
	v->a[23875] = anon_sym_DOLLAR_LPAREN;
	v->a[23876] = actions(823);
	v->a[23877] = 1;
	v->a[23878] = anon_sym_BQUOTE;
	v->a[23879] = state(213);
	small_parse_table_1194(v);
}

void	small_parse_table_1194(t_small_parse_table_array *v)
{
	v->a[23880] = 2;
	v->a[23881] = sym_concatenation;
	v->a[23882] = aux_sym_for_statement_repeat1;
	v->a[23883] = actions(811);
	v->a[23884] = 3;
	v->a[23885] = sym_raw_string;
	v->a[23886] = sym_number;
	v->a[23887] = sym_word;
	v->a[23888] = state(506);
	v->a[23889] = 5;
	v->a[23890] = sym_arithmetic_expansion;
	v->a[23891] = sym_string;
	v->a[23892] = sym_simple_expansion;
	v->a[23893] = sym_expansion;
	v->a[23894] = sym_command_substitution;
	v->a[23895] = actions(546);
	v->a[23896] = 20;
	v->a[23897] = anon_sym_esac;
	v->a[23898] = anon_sym_PIPE;
	v->a[23899] = anon_sym_SEMI_SEMI;
	small_parse_table_1195(v);
}

/* EOF small_parse_table_238.c */
