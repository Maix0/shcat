/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_788.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3940(t_small_parse_table_array *v)
{
	v->a[78800] = actions(3);
	v->a[78801] = 1;
	v->a[78802] = sym_comment;
	v->a[78803] = actions(5868);
	v->a[78804] = 1;
	v->a[78805] = anon_sym_DOLLAR_LBRACK;
	v->a[78806] = actions(5870);
	v->a[78807] = 1;
	v->a[78808] = anon_sym_DOLLAR;
	v->a[78809] = actions(5872);
	v->a[78810] = 1;
	v->a[78811] = sym__special_character;
	v->a[78812] = actions(5874);
	v->a[78813] = 1;
	v->a[78814] = anon_sym_DQUOTE;
	v->a[78815] = actions(5876);
	v->a[78816] = 1;
	v->a[78817] = aux_sym_number_token1;
	v->a[78818] = actions(5878);
	v->a[78819] = 1;
	small_parse_table_3941(v);
}

void	small_parse_table_3941(t_small_parse_table_array *v)
{
	v->a[78820] = aux_sym_number_token2;
	v->a[78821] = actions(5880);
	v->a[78822] = 1;
	v->a[78823] = anon_sym_DOLLAR_LBRACE;
	v->a[78824] = actions(5882);
	v->a[78825] = 1;
	v->a[78826] = anon_sym_DOLLAR_LPAREN;
	v->a[78827] = actions(5884);
	v->a[78828] = 1;
	v->a[78829] = anon_sym_BQUOTE;
	v->a[78830] = actions(5886);
	v->a[78831] = 1;
	v->a[78832] = anon_sym_DOLLAR_BQUOTE;
	v->a[78833] = actions(5892);
	v->a[78834] = 1;
	v->a[78835] = sym__brace_start;
	v->a[78836] = actions(5912);
	v->a[78837] = 1;
	v->a[78838] = sym_test_operator;
	v->a[78839] = state(5632);
	small_parse_table_3942(v);
}

void	small_parse_table_3942(t_small_parse_table_array *v)
{
	v->a[78840] = 1;
	v->a[78841] = aux_sym__literal_repeat1;
	v->a[78842] = state(5789);
	v->a[78843] = 1;
	v->a[78844] = sym_concatenation;
	v->a[78845] = actions(2500);
	v->a[78846] = 2;
	v->a[78847] = sym_file_descriptor;
	v->a[78848] = aux_sym_heredoc_redirect_token1;
	v->a[78849] = actions(5866);
	v->a[78850] = 2;
	v->a[78851] = anon_sym_LPAREN_LPAREN;
	v->a[78852] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78853] = actions(5888);
	v->a[78854] = 2;
	v->a[78855] = anon_sym_LT_LPAREN;
	v->a[78856] = anon_sym_GT_LPAREN;
	v->a[78857] = actions(5910);
	v->a[78858] = 3;
	v->a[78859] = sym_raw_string;
	small_parse_table_3943(v);
}

void	small_parse_table_3943(t_small_parse_table_array *v)
{
	v->a[78860] = sym_ansi_c_string;
	v->a[78861] = sym_word;
	v->a[78862] = state(5553);
	v->a[78863] = 9;
	v->a[78864] = sym_arithmetic_expansion;
	v->a[78865] = sym_brace_expression;
	v->a[78866] = sym_string;
	v->a[78867] = sym_translated_string;
	v->a[78868] = sym_number;
	v->a[78869] = sym_simple_expansion;
	v->a[78870] = sym_expansion;
	v->a[78871] = sym_command_substitution;
	v->a[78872] = sym_process_substitution;
	v->a[78873] = actions(2498);
	v->a[78874] = 13;
	v->a[78875] = anon_sym_PIPE_PIPE;
	v->a[78876] = anon_sym_AMP_AMP;
	v->a[78877] = anon_sym_LT;
	v->a[78878] = anon_sym_GT;
	v->a[78879] = anon_sym_GT_GT;
	small_parse_table_3944(v);
}

void	small_parse_table_3944(t_small_parse_table_array *v)
{
	v->a[78880] = anon_sym_AMP_GT;
	v->a[78881] = anon_sym_AMP_GT_GT;
	v->a[78882] = anon_sym_LT_AMP;
	v->a[78883] = anon_sym_GT_AMP;
	v->a[78884] = anon_sym_GT_PIPE;
	v->a[78885] = anon_sym_LT_AMP_DASH;
	v->a[78886] = anon_sym_GT_AMP_DASH;
	v->a[78887] = anon_sym_LT_LT_LT;
	v->a[78888] = 3;
	v->a[78889] = actions(3);
	v->a[78890] = 1;
	v->a[78891] = sym_comment;
	v->a[78892] = actions(1294);
	v->a[78893] = 5;
	v->a[78894] = sym_file_descriptor;
	v->a[78895] = sym__concat;
	v->a[78896] = sym_test_operator;
	v->a[78897] = sym__brace_start;
	v->a[78898] = aux_sym_heredoc_redirect_token1;
	v->a[78899] = actions(1292);
	small_parse_table_3945(v);
}

/* EOF small_parse_table_788.c */
