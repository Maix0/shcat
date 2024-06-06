/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_78.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_390(t_small_parse_table_array *v)
{
	v->a[7800] = aux_sym_number_token2;
	v->a[7801] = actions(1829);
	v->a[7802] = 1;
	v->a[7803] = anon_sym_DOLLAR_LBRACE;
	v->a[7804] = actions(1832);
	v->a[7805] = 1;
	v->a[7806] = anon_sym_DOLLAR_LPAREN;
	v->a[7807] = actions(1835);
	v->a[7808] = 1;
	v->a[7809] = anon_sym_BQUOTE;
	v->a[7810] = actions(1838);
	v->a[7811] = 1;
	v->a[7812] = anon_sym_DOLLAR_BQUOTE;
	v->a[7813] = actions(1841);
	v->a[7814] = 1;
	v->a[7815] = sym_test_operator;
	v->a[7816] = actions(1844);
	v->a[7817] = 1;
	v->a[7818] = sym__brace_start;
	v->a[7819] = state(1237);
	small_parse_table_391(v);
}

void	small_parse_table_391(t_small_parse_table_array *v)
{
	v->a[7820] = 1;
	v->a[7821] = aux_sym__literal_repeat1;
	v->a[7822] = actions(1808);
	v->a[7823] = 2;
	v->a[7824] = sym_raw_string;
	v->a[7825] = sym_word;
	v->a[7826] = state(357);
	v->a[7827] = 2;
	v->a[7828] = sym_concatenation;
	v->a[7829] = aux_sym_for_statement_repeat1;
	v->a[7830] = actions(1287);
	v->a[7831] = 3;
	v->a[7832] = sym_file_descriptor;
	v->a[7833] = sym_variable_name;
	v->a[7834] = aux_sym_heredoc_redirect_token1;
	v->a[7835] = state(768);
	v->a[7836] = 7;
	v->a[7837] = sym_arithmetic_expansion;
	v->a[7838] = sym_brace_expression;
	v->a[7839] = sym_string;
	small_parse_table_392(v);
}

void	small_parse_table_392(t_small_parse_table_array *v)
{
	v->a[7840] = sym_number;
	v->a[7841] = sym_simple_expansion;
	v->a[7842] = sym_expansion;
	v->a[7843] = sym_command_substitution;
	v->a[7844] = actions(1285);
	v->a[7845] = 20;
	v->a[7846] = anon_sym_PIPE;
	v->a[7847] = anon_sym_RPAREN;
	v->a[7848] = anon_sym_SEMI_SEMI;
	v->a[7849] = anon_sym_PIPE_AMP;
	v->a[7850] = anon_sym_AMP_AMP;
	v->a[7851] = anon_sym_PIPE_PIPE;
	v->a[7852] = anon_sym_LT;
	v->a[7853] = anon_sym_GT;
	v->a[7854] = anon_sym_GT_GT;
	v->a[7855] = anon_sym_AMP_GT;
	v->a[7856] = anon_sym_AMP_GT_GT;
	v->a[7857] = anon_sym_LT_AMP;
	v->a[7858] = anon_sym_GT_AMP;
	v->a[7859] = anon_sym_GT_PIPE;
	small_parse_table_393(v);
}

void	small_parse_table_393(t_small_parse_table_array *v)
{
	v->a[7860] = anon_sym_LT_AMP_DASH;
	v->a[7861] = anon_sym_GT_AMP_DASH;
	v->a[7862] = anon_sym_LT_LT;
	v->a[7863] = anon_sym_LT_LT_DASH;
	v->a[7864] = anon_sym_AMP;
	v->a[7865] = anon_sym_SEMI;
	v->a[7866] = 19;
	v->a[7867] = actions(3);
	v->a[7868] = 1;
	v->a[7869] = sym_comment;
	v->a[7870] = actions(1699);
	v->a[7871] = 1;
	v->a[7872] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7873] = actions(1701);
	v->a[7874] = 1;
	v->a[7875] = anon_sym_DOLLAR;
	v->a[7876] = actions(1703);
	v->a[7877] = 1;
	v->a[7878] = sym__special_character;
	v->a[7879] = actions(1705);
	small_parse_table_394(v);
}

void	small_parse_table_394(t_small_parse_table_array *v)
{
	v->a[7880] = 1;
	v->a[7881] = anon_sym_DQUOTE;
	v->a[7882] = actions(1707);
	v->a[7883] = 1;
	v->a[7884] = aux_sym_number_token1;
	v->a[7885] = actions(1709);
	v->a[7886] = 1;
	v->a[7887] = aux_sym_number_token2;
	v->a[7888] = actions(1711);
	v->a[7889] = 1;
	v->a[7890] = anon_sym_DOLLAR_LBRACE;
	v->a[7891] = actions(1713);
	v->a[7892] = 1;
	v->a[7893] = anon_sym_DOLLAR_LPAREN;
	v->a[7894] = actions(1715);
	v->a[7895] = 1;
	v->a[7896] = anon_sym_BQUOTE;
	v->a[7897] = actions(1717);
	v->a[7898] = 1;
	v->a[7899] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_395(v);
}

/* EOF small_parse_table_78.c */
