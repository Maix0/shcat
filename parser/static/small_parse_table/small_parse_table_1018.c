/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1018.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5090(t_small_parse_table_array *v)
{
	v->a[101800] = 1;
	v->a[101801] = anon_sym_DOLLAR_LPAREN;
	v->a[101802] = actions(4360);
	v->a[101803] = 1;
	v->a[101804] = sym_extglob_pattern;
	v->a[101805] = actions(4362);
	v->a[101806] = 1;
	v->a[101807] = sym__brace_start;
	v->a[101808] = actions(4550);
	v->a[101809] = 1;
	v->a[101810] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[101811] = actions(4552);
	v->a[101812] = 1;
	v->a[101813] = sym__special_character;
	v->a[101814] = actions(4554);
	v->a[101815] = 1;
	v->a[101816] = anon_sym_DQUOTE;
	v->a[101817] = actions(4556);
	v->a[101818] = 1;
	v->a[101819] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_5091(v);
}

void	small_parse_table_5091(t_small_parse_table_array *v)
{
	v->a[101820] = actions(4558);
	v->a[101821] = 1;
	v->a[101822] = anon_sym_BQUOTE;
	v->a[101823] = actions(4560);
	v->a[101824] = 1;
	v->a[101825] = anon_sym_DOLLAR_BQUOTE;
	v->a[101826] = actions(5842);
	v->a[101827] = 1;
	v->a[101828] = sym_word;
	v->a[101829] = state(3419);
	v->a[101830] = 1;
	v->a[101831] = aux_sym__literal_repeat1;
	v->a[101832] = actions(5844);
	v->a[101833] = 2;
	v->a[101834] = sym_test_operator;
	v->a[101835] = sym_raw_string;
	v->a[101836] = state(3508);
	v->a[101837] = 2;
	v->a[101838] = sym_concatenation;
	v->a[101839] = sym__extglob_blob;
	small_parse_table_5092(v);
}

void	small_parse_table_5092(t_small_parse_table_array *v)
{
	v->a[101840] = state(3306);
	v->a[101841] = 7;
	v->a[101842] = sym_arithmetic_expansion;
	v->a[101843] = sym_brace_expression;
	v->a[101844] = sym_string;
	v->a[101845] = sym_number;
	v->a[101846] = sym_simple_expansion;
	v->a[101847] = sym_expansion;
	v->a[101848] = sym_command_substitution;
	v->a[101849] = 11;
	v->a[101850] = actions(3);
	v->a[101851] = 1;
	v->a[101852] = sym_comment;
	v->a[101853] = actions(2514);
	v->a[101854] = 1;
	v->a[101855] = anon_sym_BQUOTE;
	v->a[101856] = actions(3379);
	v->a[101857] = 1;
	v->a[101858] = aux_sym_heredoc_redirect_token1;
	v->a[101859] = actions(5403);
	small_parse_table_5093(v);
}

void	small_parse_table_5093(t_small_parse_table_array *v)
{
	v->a[101860] = 1;
	v->a[101861] = sym_file_descriptor;
	v->a[101862] = actions(2516);
	v->a[101863] = 2;
	v->a[101864] = anon_sym_PIPE;
	v->a[101865] = anon_sym_PIPE_AMP;
	v->a[101866] = actions(2945);
	v->a[101867] = 2;
	v->a[101868] = anon_sym_LT_LT;
	v->a[101869] = anon_sym_LT_LT_DASH;
	v->a[101870] = actions(3377);
	v->a[101871] = 2;
	v->a[101872] = anon_sym_AMP_AMP;
	v->a[101873] = anon_sym_PIPE_PIPE;
	v->a[101874] = actions(5401);
	v->a[101875] = 2;
	v->a[101876] = anon_sym_LT_AMP_DASH;
	v->a[101877] = anon_sym_GT_AMP_DASH;
	v->a[101878] = actions(3375);
	v->a[101879] = 3;
	small_parse_table_5094(v);
}

void	small_parse_table_5094(t_small_parse_table_array *v)
{
	v->a[101880] = anon_sym_SEMI_SEMI;
	v->a[101881] = anon_sym_AMP;
	v->a[101882] = anon_sym_SEMI;
	v->a[101883] = state(2140);
	v->a[101884] = 3;
	v->a[101885] = sym_file_redirect;
	v->a[101886] = sym_heredoc_redirect;
	v->a[101887] = aux_sym_redirected_statement_repeat1;
	v->a[101888] = actions(5399);
	v->a[101889] = 8;
	v->a[101890] = anon_sym_LT;
	v->a[101891] = anon_sym_GT;
	v->a[101892] = anon_sym_GT_GT;
	v->a[101893] = anon_sym_AMP_GT;
	v->a[101894] = anon_sym_AMP_GT_GT;
	v->a[101895] = anon_sym_LT_AMP;
	v->a[101896] = anon_sym_GT_AMP;
	v->a[101897] = anon_sym_GT_PIPE;
	v->a[101898] = 19;
	v->a[101899] = actions(3);
	small_parse_table_5095(v);
}

/* EOF small_parse_table_1018.c */
