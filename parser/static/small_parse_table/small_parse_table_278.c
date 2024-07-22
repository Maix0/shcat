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
	v->a[27800] = 1;
	v->a[27801] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27802] = actions(1014);
	v->a[27803] = 1;
	v->a[27804] = anon_sym_DOLLAR;
	v->a[27805] = actions(1016);
	v->a[27806] = 1;
	v->a[27807] = anon_sym_DQUOTE;
	v->a[27808] = actions(1018);
	v->a[27809] = 1;
	v->a[27810] = anon_sym_DOLLAR_LBRACE;
	v->a[27811] = actions(1020);
	v->a[27812] = 1;
	v->a[27813] = anon_sym_DOLLAR_LPAREN;
	v->a[27814] = actions(1022);
	v->a[27815] = 1;
	v->a[27816] = anon_sym_BQUOTE;
	v->a[27817] = actions(1024);
	v->a[27818] = 1;
	v->a[27819] = sym_file_descriptor;
	small_parse_table_1391(v);
}

void	small_parse_table_1391(t_small_parse_table_array *v)
{
	v->a[27820] = actions(1051);
	v->a[27821] = 1;
	v->a[27822] = aux_sym_heredoc_redirect_token1;
	v->a[27823] = state(1217);
	v->a[27824] = 1;
	v->a[27825] = aux_sym__heredoc_command;
	v->a[27826] = state(1722);
	v->a[27827] = 1;
	v->a[27828] = sym_concatenation;
	v->a[27829] = state(1999);
	v->a[27830] = 1;
	v->a[27831] = sym__heredoc_pipeline;
	v->a[27832] = state(2000);
	v->a[27833] = 1;
	v->a[27834] = sym__heredoc_expression;
	v->a[27835] = actions(1006);
	v->a[27836] = 2;
	v->a[27837] = anon_sym_AMP_AMP;
	v->a[27838] = anon_sym_PIPE_PIPE;
	v->a[27839] = state(1447);
	small_parse_table_1392(v);
}

void	small_parse_table_1392(t_small_parse_table_array *v)
{
	v->a[27840] = 2;
	v->a[27841] = sym_file_redirect;
	v->a[27842] = aux_sym_redirected_statement_repeat2;
	v->a[27843] = actions(1002);
	v->a[27844] = 3;
	v->a[27845] = sym_raw_string;
	v->a[27846] = sym_number;
	v->a[27847] = sym_word;
	v->a[27848] = state(1516);
	v->a[27849] = 5;
	v->a[27850] = sym_arithmetic_expansion;
	v->a[27851] = sym_string;
	v->a[27852] = sym_simple_expansion;
	v->a[27853] = sym_expansion;
	v->a[27854] = sym_command_substitution;
	v->a[27855] = actions(1008);
	v->a[27856] = 7;
	v->a[27857] = anon_sym_LT;
	v->a[27858] = anon_sym_GT;
	v->a[27859] = anon_sym_GT_GT;
	small_parse_table_1393(v);
}

void	small_parse_table_1393(t_small_parse_table_array *v)
{
	v->a[27860] = anon_sym_LT_AMP;
	v->a[27861] = anon_sym_GT_AMP;
	v->a[27862] = anon_sym_GT_PIPE;
	v->a[27863] = anon_sym_LT_GT;
	v->a[27864] = 19;
	v->a[27865] = actions(3);
	v->a[27866] = 1;
	v->a[27867] = sym_comment;
	v->a[27868] = actions(1004);
	v->a[27869] = 1;
	v->a[27870] = anon_sym_PIPE;
	v->a[27871] = actions(1012);
	v->a[27872] = 1;
	v->a[27873] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27874] = actions(1014);
	v->a[27875] = 1;
	v->a[27876] = anon_sym_DOLLAR;
	v->a[27877] = actions(1016);
	v->a[27878] = 1;
	v->a[27879] = anon_sym_DQUOTE;
	small_parse_table_1394(v);
}

void	small_parse_table_1394(t_small_parse_table_array *v)
{
	v->a[27880] = actions(1018);
	v->a[27881] = 1;
	v->a[27882] = anon_sym_DOLLAR_LBRACE;
	v->a[27883] = actions(1020);
	v->a[27884] = 1;
	v->a[27885] = anon_sym_DOLLAR_LPAREN;
	v->a[27886] = actions(1022);
	v->a[27887] = 1;
	v->a[27888] = anon_sym_BQUOTE;
	v->a[27889] = actions(1024);
	v->a[27890] = 1;
	v->a[27891] = sym_file_descriptor;
	v->a[27892] = actions(1053);
	v->a[27893] = 1;
	v->a[27894] = aux_sym_heredoc_redirect_token1;
	v->a[27895] = state(1295);
	v->a[27896] = 1;
	v->a[27897] = aux_sym__heredoc_command;
	v->a[27898] = state(1722);
	v->a[27899] = 1;
	small_parse_table_1395(v);
}

/* EOF small_parse_table_278.c */
