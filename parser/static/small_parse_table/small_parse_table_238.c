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
	v->a[23800] = 1;
	v->a[23801] = sym_terminator;
	v->a[23802] = actions(784);
	v->a[23803] = 2;
	v->a[23804] = anon_sym_esac;
	v->a[23805] = anon_sym_SEMI_SEMI;
	v->a[23806] = actions(882);
	v->a[23807] = 2;
	v->a[23808] = anon_sym_AMP_AMP;
	v->a[23809] = anon_sym_PIPE_PIPE;
	v->a[23810] = actions(884);
	v->a[23811] = 2;
	v->a[23812] = anon_sym_LT_LT;
	v->a[23813] = anon_sym_LT_LT_DASH;
	v->a[23814] = actions(886);
	v->a[23815] = 2;
	v->a[23816] = aux_sym_heredoc_redirect_token1;
	v->a[23817] = anon_sym_SEMI;
	v->a[23818] = state(1092);
	v->a[23819] = 2;
	small_parse_table_1191(v);
}

void	small_parse_table_1191(t_small_parse_table_array *v)
{
	v->a[23820] = sym_variable_assignment;
	v->a[23821] = aux_sym__variable_assignments_repeat1;
	v->a[23822] = state(1099);
	v->a[23823] = 3;
	v->a[23824] = sym_file_redirect;
	v->a[23825] = sym_heredoc_redirect;
	v->a[23826] = aux_sym_redirected_statement_repeat1;
	v->a[23827] = actions(780);
	v->a[23828] = 16;
	v->a[23829] = anon_sym_LT;
	v->a[23830] = anon_sym_GT;
	v->a[23831] = anon_sym_GT_GT;
	v->a[23832] = anon_sym_LT_AMP;
	v->a[23833] = anon_sym_GT_AMP;
	v->a[23834] = anon_sym_GT_PIPE;
	v->a[23835] = anon_sym_LT_GT;
	v->a[23836] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23837] = anon_sym_DOLLAR;
	v->a[23838] = anon_sym_DQUOTE;
	v->a[23839] = sym_raw_string;
	small_parse_table_1192(v);
}

void	small_parse_table_1192(t_small_parse_table_array *v)
{
	v->a[23840] = sym_number;
	v->a[23841] = anon_sym_DOLLAR_LBRACE;
	v->a[23842] = anon_sym_DOLLAR_LPAREN;
	v->a[23843] = anon_sym_BQUOTE;
	v->a[23844] = sym_word;
	v->a[23845] = 12;
	v->a[23846] = actions(3);
	v->a[23847] = 1;
	v->a[23848] = sym_comment;
	v->a[23849] = actions(819);
	v->a[23850] = 1;
	v->a[23851] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23852] = actions(821);
	v->a[23853] = 1;
	v->a[23854] = anon_sym_DOLLAR;
	v->a[23855] = actions(823);
	v->a[23856] = 1;
	v->a[23857] = anon_sym_DQUOTE;
	v->a[23858] = actions(825);
	v->a[23859] = 1;
	small_parse_table_1193(v);
}

void	small_parse_table_1193(t_small_parse_table_array *v)
{
	v->a[23860] = anon_sym_DOLLAR_LBRACE;
	v->a[23861] = actions(827);
	v->a[23862] = 1;
	v->a[23863] = anon_sym_DOLLAR_LPAREN;
	v->a[23864] = actions(829);
	v->a[23865] = 1;
	v->a[23866] = anon_sym_BQUOTE;
	v->a[23867] = actions(529);
	v->a[23868] = 2;
	v->a[23869] = sym_file_descriptor;
	v->a[23870] = ts_builtin_sym_end;
	v->a[23871] = state(251);
	v->a[23872] = 2;
	v->a[23873] = sym_concatenation;
	v->a[23874] = aux_sym_for_statement_repeat1;
	v->a[23875] = actions(817);
	v->a[23876] = 3;
	v->a[23877] = sym_raw_string;
	v->a[23878] = sym_number;
	v->a[23879] = sym_word;
	small_parse_table_1194(v);
}

void	small_parse_table_1194(t_small_parse_table_array *v)
{
	v->a[23880] = state(533);
	v->a[23881] = 5;
	v->a[23882] = sym_arithmetic_expansion;
	v->a[23883] = sym_string;
	v->a[23884] = sym_simple_expansion;
	v->a[23885] = sym_expansion;
	v->a[23886] = sym_command_substitution;
	v->a[23887] = actions(531);
	v->a[23888] = 15;
	v->a[23889] = anon_sym_PIPE;
	v->a[23890] = anon_sym_SEMI_SEMI;
	v->a[23891] = anon_sym_AMP_AMP;
	v->a[23892] = anon_sym_PIPE_PIPE;
	v->a[23893] = anon_sym_LT;
	v->a[23894] = anon_sym_GT;
	v->a[23895] = anon_sym_GT_GT;
	v->a[23896] = anon_sym_LT_AMP;
	v->a[23897] = anon_sym_GT_AMP;
	v->a[23898] = anon_sym_GT_PIPE;
	v->a[23899] = anon_sym_LT_GT;
	small_parse_table_1195(v);
}

/* EOF small_parse_table_238.c */
