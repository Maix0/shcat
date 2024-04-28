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
	v->a[54800] = sym_file_descriptor;
	v->a[54801] = sym__concat;
	v->a[54802] = sym_variable_name;
	v->a[54803] = sym_test_operator;
	v->a[54804] = sym__brace_start;
	v->a[54805] = aux_sym_heredoc_redirect_token1;
	v->a[54806] = actions(1344);
	v->a[54807] = 41;
	v->a[54808] = anon_sym_LPAREN_LPAREN;
	v->a[54809] = anon_sym_SEMI;
	v->a[54810] = anon_sym_PIPE_PIPE;
	v->a[54811] = anon_sym_AMP_AMP;
	v->a[54812] = anon_sym_PIPE;
	v->a[54813] = anon_sym_AMP;
	v->a[54814] = anon_sym_LT;
	v->a[54815] = anon_sym_GT;
	v->a[54816] = anon_sym_LT_LT;
	v->a[54817] = anon_sym_GT_GT;
	v->a[54818] = anon_sym_esac;
	v->a[54819] = anon_sym_SEMI_SEMI;
	small_parse_table_2741(v);
}

void	small_parse_table_2741(t_small_parse_table_array *v)
{
	v->a[54820] = anon_sym_SEMI_AMP;
	v->a[54821] = anon_sym_SEMI_SEMI_AMP;
	v->a[54822] = anon_sym_PIPE_AMP;
	v->a[54823] = anon_sym_AMP_GT;
	v->a[54824] = anon_sym_AMP_GT_GT;
	v->a[54825] = anon_sym_LT_AMP;
	v->a[54826] = anon_sym_GT_AMP;
	v->a[54827] = anon_sym_GT_PIPE;
	v->a[54828] = anon_sym_LT_AMP_DASH;
	v->a[54829] = anon_sym_GT_AMP_DASH;
	v->a[54830] = anon_sym_LT_LT_DASH;
	v->a[54831] = anon_sym_LT_LT_LT;
	v->a[54832] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54833] = anon_sym_DOLLAR_LBRACK;
	v->a[54834] = aux_sym_concatenation_token1;
	v->a[54835] = anon_sym_DOLLAR;
	v->a[54836] = sym__special_character;
	v->a[54837] = anon_sym_DQUOTE;
	v->a[54838] = sym_raw_string;
	v->a[54839] = sym_ansi_c_string;
	small_parse_table_2742(v);
}

void	small_parse_table_2742(t_small_parse_table_array *v)
{
	v->a[54840] = aux_sym_number_token1;
	v->a[54841] = aux_sym_number_token2;
	v->a[54842] = anon_sym_DOLLAR_LBRACE;
	v->a[54843] = anon_sym_DOLLAR_LPAREN;
	v->a[54844] = anon_sym_BQUOTE;
	v->a[54845] = anon_sym_DOLLAR_BQUOTE;
	v->a[54846] = anon_sym_LT_LPAREN;
	v->a[54847] = anon_sym_GT_LPAREN;
	v->a[54848] = sym_word;
	v->a[54849] = 3;
	v->a[54850] = actions(3);
	v->a[54851] = 1;
	v->a[54852] = sym_comment;
	v->a[54853] = actions(1330);
	v->a[54854] = 7;
	v->a[54855] = sym_file_descriptor;
	v->a[54856] = sym__concat;
	v->a[54857] = sym_test_operator;
	v->a[54858] = sym__bare_dollar;
	v->a[54859] = sym__brace_start;
	small_parse_table_2743(v);
}

void	small_parse_table_2743(t_small_parse_table_array *v)
{
	v->a[54860] = ts_builtin_sym_end;
	v->a[54861] = aux_sym_heredoc_redirect_token1;
	v->a[54862] = actions(1328);
	v->a[54863] = 40;
	v->a[54864] = anon_sym_LPAREN_LPAREN;
	v->a[54865] = anon_sym_SEMI;
	v->a[54866] = anon_sym_PIPE_PIPE;
	v->a[54867] = anon_sym_AMP_AMP;
	v->a[54868] = anon_sym_PIPE;
	v->a[54869] = anon_sym_AMP;
	v->a[54870] = anon_sym_EQ_EQ;
	v->a[54871] = anon_sym_LT;
	v->a[54872] = anon_sym_GT;
	v->a[54873] = anon_sym_LT_LT;
	v->a[54874] = anon_sym_GT_GT;
	v->a[54875] = anon_sym_SEMI_SEMI;
	v->a[54876] = anon_sym_PIPE_AMP;
	v->a[54877] = anon_sym_EQ_TILDE;
	v->a[54878] = anon_sym_AMP_GT;
	v->a[54879] = anon_sym_AMP_GT_GT;
	small_parse_table_2744(v);
}

void	small_parse_table_2744(t_small_parse_table_array *v)
{
	v->a[54880] = anon_sym_LT_AMP;
	v->a[54881] = anon_sym_GT_AMP;
	v->a[54882] = anon_sym_GT_PIPE;
	v->a[54883] = anon_sym_LT_AMP_DASH;
	v->a[54884] = anon_sym_GT_AMP_DASH;
	v->a[54885] = anon_sym_LT_LT_DASH;
	v->a[54886] = anon_sym_LT_LT_LT;
	v->a[54887] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54888] = anon_sym_DOLLAR_LBRACK;
	v->a[54889] = aux_sym_concatenation_token1;
	v->a[54890] = anon_sym_DOLLAR;
	v->a[54891] = sym__special_character;
	v->a[54892] = anon_sym_DQUOTE;
	v->a[54893] = sym_raw_string;
	v->a[54894] = sym_ansi_c_string;
	v->a[54895] = aux_sym_number_token1;
	v->a[54896] = aux_sym_number_token2;
	v->a[54897] = anon_sym_DOLLAR_LBRACE;
	v->a[54898] = anon_sym_DOLLAR_LPAREN;
	v->a[54899] = anon_sym_BQUOTE;
	small_parse_table_2745(v);
}

/* EOF small_parse_table_548.c */
