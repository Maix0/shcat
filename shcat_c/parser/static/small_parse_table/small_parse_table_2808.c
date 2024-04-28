/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2808.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14040(t_small_parse_table_array *v)
{
	v->a[280800] = 1;
	v->a[280801] = aux_sym_number_token1;
	v->a[280802] = actions(7795);
	v->a[280803] = 1;
	v->a[280804] = aux_sym_number_token2;
	v->a[280805] = actions(12543);
	v->a[280806] = 1;
	v->a[280807] = anon_sym_LPAREN;
	v->a[280808] = actions(12547);
	v->a[280809] = 1;
	v->a[280810] = anon_sym_DOLLAR_LBRACK;
	v->a[280811] = actions(12551);
	v->a[280812] = 1;
	v->a[280813] = anon_sym_DOLLAR_LBRACE;
	v->a[280814] = actions(12555);
	v->a[280815] = 1;
	v->a[280816] = anon_sym_DOLLAR_LPAREN;
	v->a[280817] = actions(12557);
	v->a[280818] = 1;
	v->a[280819] = anon_sym_BQUOTE;
	small_parse_table_14041(v);
}

void	small_parse_table_14041(t_small_parse_table_array *v)
{
	v->a[280820] = actions(12559);
	v->a[280821] = 1;
	v->a[280822] = anon_sym_DOLLAR_BQUOTE;
	v->a[280823] = actions(12674);
	v->a[280824] = 1;
	v->a[280825] = aux_sym_heredoc_redirect_token1;
	v->a[280826] = actions(12676);
	v->a[280827] = 1;
	v->a[280828] = anon_sym_COLON;
	v->a[280829] = actions(12678);
	v->a[280830] = 1;
	v->a[280831] = anon_sym_RBRACE3;
	v->a[280832] = actions(12680);
	v->a[280833] = 1;
	v->a[280834] = aux_sym__simple_variable_name_token1;
	v->a[280835] = state(6218);
	v->a[280836] = 1;
	v->a[280837] = sym__expansion_max_length_binary_expression;
	v->a[280838] = state(6470);
	v->a[280839] = 1;
	small_parse_table_14042(v);
}

void	small_parse_table_14042(t_small_parse_table_array *v)
{
	v->a[280840] = sym__expansion_max_length_expression;
	v->a[280841] = actions(12541);
	v->a[280842] = 2;
	v->a[280843] = anon_sym_LPAREN_LPAREN;
	v->a[280844] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[280845] = state(6208);
	v->a[280846] = 2;
	v->a[280847] = sym_number;
	v->a[280848] = sym_expansion;
	v->a[280849] = state(6780);
	v->a[280850] = 3;
	v->a[280851] = sym_parenthesized_expression;
	v->a[280852] = sym_arithmetic_expansion;
	v->a[280853] = sym_command_substitution;
	v->a[280854] = 3;
	v->a[280855] = actions(71);
	v->a[280856] = 1;
	v->a[280857] = sym_comment;
	v->a[280858] = actions(12423);
	v->a[280859] = 6;
	small_parse_table_14043(v);
}

void	small_parse_table_14043(t_small_parse_table_array *v)
{
	v->a[280860] = anon_sym_LPAREN;
	v->a[280861] = anon_sym_DOLLAR;
	v->a[280862] = aux_sym_number_token1;
	v->a[280863] = aux_sym_number_token2;
	v->a[280864] = anon_sym_DOLLAR_LPAREN;
	v->a[280865] = sym_word;
	v->a[280866] = actions(12425);
	v->a[280867] = 15;
	v->a[280868] = sym_test_operator;
	v->a[280869] = sym_extglob_pattern;
	v->a[280870] = sym__brace_start;
	v->a[280871] = anon_sym_LPAREN_LPAREN;
	v->a[280872] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[280873] = anon_sym_DOLLAR_LBRACK;
	v->a[280874] = sym__special_character;
	v->a[280875] = anon_sym_DQUOTE;
	v->a[280876] = sym_raw_string;
	v->a[280877] = sym_ansi_c_string;
	v->a[280878] = anon_sym_DOLLAR_LBRACE;
	v->a[280879] = anon_sym_BQUOTE;
	small_parse_table_14044(v);
}

void	small_parse_table_14044(t_small_parse_table_array *v)
{
	v->a[280880] = anon_sym_DOLLAR_BQUOTE;
	v->a[280881] = anon_sym_LT_LPAREN;
	v->a[280882] = anon_sym_GT_LPAREN;
	v->a[280883] = 3;
	v->a[280884] = actions(71);
	v->a[280885] = 1;
	v->a[280886] = sym_comment;
	v->a[280887] = actions(1308);
	v->a[280888] = 7;
	v->a[280889] = anon_sym_PIPE;
	v->a[280890] = anon_sym_LT;
	v->a[280891] = anon_sym_GT;
	v->a[280892] = anon_sym_LT_LT;
	v->a[280893] = anon_sym_AMP_GT;
	v->a[280894] = anon_sym_LT_AMP;
	v->a[280895] = anon_sym_GT_AMP;
	v->a[280896] = actions(1310);
	v->a[280897] = 14;
	v->a[280898] = sym_file_descriptor;
	v->a[280899] = sym__concat;
	small_parse_table_14045(v);
}

/* EOF small_parse_table_2808.c */
