/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_548.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2740(t_small_parse_table_array *v)
{
	v->a[54800] = aux_sym_number_token2;
	v->a[54801] = anon_sym_DOLLAR_LBRACE;
	v->a[54802] = anon_sym_DOLLAR_LPAREN;
	v->a[54803] = anon_sym_BQUOTE;
	v->a[54804] = anon_sym_DOLLAR_BQUOTE;
	v->a[54805] = sym_word;
	v->a[54806] = anon_sym_SEMI;
	v->a[54807] = 10;
	v->a[54808] = actions(3);
	v->a[54809] = 1;
	v->a[54810] = sym_comment;
	v->a[54811] = actions(3747);
	v->a[54812] = 1;
	v->a[54813] = sym_variable_name;
	v->a[54814] = actions(3801);
	v->a[54815] = 1;
	v->a[54816] = aux_sym_heredoc_redirect_token1;
	v->a[54817] = actions(2516);
	v->a[54818] = 2;
	v->a[54819] = anon_sym_PIPE;
	small_parse_table_2741(v);
}

void	small_parse_table_2741(t_small_parse_table_array *v)
{
	v->a[54820] = anon_sym_PIPE_AMP;
	v->a[54821] = actions(2945);
	v->a[54822] = 2;
	v->a[54823] = anon_sym_LT_LT;
	v->a[54824] = anon_sym_LT_LT_DASH;
	v->a[54825] = actions(3799);
	v->a[54826] = 2;
	v->a[54827] = anon_sym_AMP_AMP;
	v->a[54828] = anon_sym_PIPE_PIPE;
	v->a[54829] = state(2601);
	v->a[54830] = 2;
	v->a[54831] = sym_variable_assignment;
	v->a[54832] = aux_sym_variable_assignments_repeat1;
	v->a[54833] = actions(2526);
	v->a[54834] = 3;
	v->a[54835] = sym_file_descriptor;
	v->a[54836] = sym_test_operator;
	v->a[54837] = sym__brace_start;
	v->a[54838] = state(2613);
	v->a[54839] = 3;
	small_parse_table_2742(v);
}

void	small_parse_table_2742(t_small_parse_table_array *v)
{
	v->a[54840] = sym_file_redirect;
	v->a[54841] = sym_heredoc_redirect;
	v->a[54842] = aux_sym_redirected_statement_repeat1;
	v->a[54843] = actions(2512);
	v->a[54844] = 22;
	v->a[54845] = anon_sym_LT;
	v->a[54846] = anon_sym_GT;
	v->a[54847] = anon_sym_GT_GT;
	v->a[54848] = anon_sym_AMP_GT;
	v->a[54849] = anon_sym_AMP_GT_GT;
	v->a[54850] = anon_sym_LT_AMP;
	v->a[54851] = anon_sym_GT_AMP;
	v->a[54852] = anon_sym_GT_PIPE;
	v->a[54853] = anon_sym_LT_AMP_DASH;
	v->a[54854] = anon_sym_GT_AMP_DASH;
	v->a[54855] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54856] = anon_sym_DOLLAR;
	v->a[54857] = sym__special_character;
	v->a[54858] = anon_sym_DQUOTE;
	v->a[54859] = sym_raw_string;
	small_parse_table_2743(v);
}

void	small_parse_table_2743(t_small_parse_table_array *v)
{
	v->a[54860] = aux_sym_number_token1;
	v->a[54861] = aux_sym_number_token2;
	v->a[54862] = anon_sym_DOLLAR_LBRACE;
	v->a[54863] = anon_sym_DOLLAR_LPAREN;
	v->a[54864] = anon_sym_BQUOTE;
	v->a[54865] = anon_sym_DOLLAR_BQUOTE;
	v->a[54866] = sym_word;
	v->a[54867] = 10;
	v->a[54868] = actions(3);
	v->a[54869] = 1;
	v->a[54870] = sym_comment;
	v->a[54871] = actions(3747);
	v->a[54872] = 1;
	v->a[54873] = sym_variable_name;
	v->a[54874] = actions(3803);
	v->a[54875] = 1;
	v->a[54876] = aux_sym_heredoc_redirect_token1;
	v->a[54877] = actions(2516);
	v->a[54878] = 2;
	v->a[54879] = anon_sym_PIPE;
	small_parse_table_2744(v);
}

void	small_parse_table_2744(t_small_parse_table_array *v)
{
	v->a[54880] = anon_sym_PIPE_AMP;
	v->a[54881] = actions(2945);
	v->a[54882] = 2;
	v->a[54883] = anon_sym_LT_LT;
	v->a[54884] = anon_sym_LT_LT_DASH;
	v->a[54885] = actions(3799);
	v->a[54886] = 2;
	v->a[54887] = anon_sym_AMP_AMP;
	v->a[54888] = anon_sym_PIPE_PIPE;
	v->a[54889] = state(2601);
	v->a[54890] = 2;
	v->a[54891] = sym_variable_assignment;
	v->a[54892] = aux_sym_variable_assignments_repeat1;
	v->a[54893] = actions(2526);
	v->a[54894] = 3;
	v->a[54895] = sym_file_descriptor;
	v->a[54896] = sym_test_operator;
	v->a[54897] = sym__brace_start;
	v->a[54898] = state(2613);
	v->a[54899] = 3;
	small_parse_table_2745(v);
}

/* EOF small_parse_table_548.c */
