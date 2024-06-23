/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_278.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1390(t_small_parse_table_array *v)
{
	v->a[27800] = 2;
	v->a[27801] = anon_sym_AMP_AMP;
	v->a[27802] = anon_sym_PIPE_PIPE;
	v->a[27803] = state(1415);
	v->a[27804] = 2;
	v->a[27805] = sym_variable_assignment;
	v->a[27806] = aux_sym__variable_assignments_repeat1;
	v->a[27807] = state(1322);
	v->a[27808] = 3;
	v->a[27809] = sym_file_redirect;
	v->a[27810] = sym_heredoc_redirect;
	v->a[27811] = aux_sym_redirected_statement_repeat1;
	v->a[27812] = actions(1053);
	v->a[27813] = 4;
	v->a[27814] = anon_sym_SEMI_SEMI;
	v->a[27815] = aux_sym_heredoc_redirect_token1;
	v->a[27816] = anon_sym_AMP;
	v->a[27817] = anon_sym_SEMI;
	v->a[27818] = actions(805);
	v->a[27819] = 19;
	small_parse_table_1391(v);
}

void	small_parse_table_1391(t_small_parse_table_array *v)
{
	v->a[27820] = anon_sym_LT;
	v->a[27821] = anon_sym_GT;
	v->a[27822] = anon_sym_GT_GT;
	v->a[27823] = anon_sym_AMP_GT;
	v->a[27824] = anon_sym_AMP_GT_GT;
	v->a[27825] = anon_sym_LT_AMP;
	v->a[27826] = anon_sym_GT_AMP;
	v->a[27827] = anon_sym_GT_PIPE;
	v->a[27828] = anon_sym_LT_AMP_DASH;
	v->a[27829] = anon_sym_GT_AMP_DASH;
	v->a[27830] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27831] = anon_sym_DOLLAR;
	v->a[27832] = anon_sym_DQUOTE;
	v->a[27833] = sym_raw_string;
	v->a[27834] = sym_number;
	v->a[27835] = anon_sym_DOLLAR_LBRACE;
	v->a[27836] = anon_sym_DOLLAR_LPAREN;
	v->a[27837] = anon_sym_BQUOTE;
	v->a[27838] = sym_word;
	v->a[27839] = 16;
	small_parse_table_1392(v);
}

void	small_parse_table_1392(t_small_parse_table_array *v)
{
	v->a[27840] = actions(3);
	v->a[27841] = 1;
	v->a[27842] = sym_comment;
	v->a[27843] = actions(335);
	v->a[27844] = 1;
	v->a[27845] = anon_sym_LPAREN;
	v->a[27846] = actions(493);
	v->a[27847] = 1;
	v->a[27848] = sym_file_descriptor;
	v->a[27849] = actions(1011);
	v->a[27850] = 1;
	v->a[27851] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27852] = actions(1013);
	v->a[27853] = 1;
	v->a[27854] = anon_sym_DOLLAR;
	v->a[27855] = actions(1015);
	v->a[27856] = 1;
	v->a[27857] = anon_sym_DQUOTE;
	v->a[27858] = actions(1017);
	v->a[27859] = 1;
	small_parse_table_1393(v);
}

void	small_parse_table_1393(t_small_parse_table_array *v)
{
	v->a[27860] = anon_sym_DOLLAR_LBRACE;
	v->a[27861] = actions(1019);
	v->a[27862] = 1;
	v->a[27863] = anon_sym_DOLLAR_LPAREN;
	v->a[27864] = actions(1021);
	v->a[27865] = 1;
	v->a[27866] = anon_sym_BQUOTE;
	v->a[27867] = actions(1023);
	v->a[27868] = 1;
	v->a[27869] = sym__bare_dollar;
	v->a[27870] = state(523);
	v->a[27871] = 1;
	v->a[27872] = aux_sym_command_repeat2;
	v->a[27873] = state(1114);
	v->a[27874] = 1;
	v->a[27875] = sym_concatenation;
	v->a[27876] = state(1759);
	v->a[27877] = 1;
	v->a[27878] = sym_subshell;
	v->a[27879] = actions(1009);
	small_parse_table_1394(v);
}

void	small_parse_table_1394(t_small_parse_table_array *v)
{
	v->a[27880] = 3;
	v->a[27881] = sym_raw_string;
	v->a[27882] = sym_number;
	v->a[27883] = sym_word;
	v->a[27884] = state(951);
	v->a[27885] = 5;
	v->a[27886] = sym_arithmetic_expansion;
	v->a[27887] = sym_string;
	v->a[27888] = sym_simple_expansion;
	v->a[27889] = sym_expansion;
	v->a[27890] = sym_command_substitution;
	v->a[27891] = actions(491);
	v->a[27892] = 15;
	v->a[27893] = anon_sym_PIPE;
	v->a[27894] = anon_sym_AMP_AMP;
	v->a[27895] = anon_sym_PIPE_PIPE;
	v->a[27896] = anon_sym_LT;
	v->a[27897] = anon_sym_GT;
	v->a[27898] = anon_sym_GT_GT;
	v->a[27899] = anon_sym_AMP_GT;
	small_parse_table_1395(v);
}

/* EOF small_parse_table_278.c */
