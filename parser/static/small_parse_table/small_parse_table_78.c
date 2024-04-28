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
	v->a[7800] = sym_brace_expression;
	v->a[7801] = sym_string;
	v->a[7802] = sym_translated_string;
	v->a[7803] = sym_number;
	v->a[7804] = sym_simple_expansion;
	v->a[7805] = sym_expansion;
	v->a[7806] = sym_command_substitution;
	v->a[7807] = sym_process_substitution;
	v->a[7808] = actions(2498);
	v->a[7809] = 40;
	v->a[7810] = anon_sym_LPAREN_LPAREN;
	v->a[7811] = anon_sym_SEMI;
	v->a[7812] = anon_sym_PIPE_PIPE;
	v->a[7813] = anon_sym_AMP_AMP;
	v->a[7814] = anon_sym_PIPE;
	v->a[7815] = anon_sym_AMP;
	v->a[7816] = anon_sym_LT;
	v->a[7817] = anon_sym_GT;
	v->a[7818] = anon_sym_LT_LT;
	v->a[7819] = anon_sym_GT_GT;
	small_parse_table_391(v);
}

void	small_parse_table_391(t_small_parse_table_array *v)
{
	v->a[7820] = anon_sym_esac;
	v->a[7821] = anon_sym_SEMI_SEMI;
	v->a[7822] = anon_sym_SEMI_AMP;
	v->a[7823] = anon_sym_SEMI_SEMI_AMP;
	v->a[7824] = anon_sym_PIPE_AMP;
	v->a[7825] = anon_sym_AMP_GT;
	v->a[7826] = anon_sym_AMP_GT_GT;
	v->a[7827] = anon_sym_LT_AMP;
	v->a[7828] = anon_sym_GT_AMP;
	v->a[7829] = anon_sym_GT_PIPE;
	v->a[7830] = anon_sym_LT_AMP_DASH;
	v->a[7831] = anon_sym_GT_AMP_DASH;
	v->a[7832] = anon_sym_LT_LT_DASH;
	v->a[7833] = anon_sym_LT_LT_LT;
	v->a[7834] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7835] = anon_sym_DOLLAR_LBRACK;
	v->a[7836] = anon_sym_DOLLAR;
	v->a[7837] = sym__special_character;
	v->a[7838] = anon_sym_DQUOTE;
	v->a[7839] = sym_raw_string;
	small_parse_table_392(v);
}

void	small_parse_table_392(t_small_parse_table_array *v)
{
	v->a[7840] = sym_ansi_c_string;
	v->a[7841] = aux_sym_number_token1;
	v->a[7842] = aux_sym_number_token2;
	v->a[7843] = anon_sym_DOLLAR_LBRACE;
	v->a[7844] = anon_sym_DOLLAR_LPAREN;
	v->a[7845] = anon_sym_BQUOTE;
	v->a[7846] = anon_sym_DOLLAR_BQUOTE;
	v->a[7847] = anon_sym_LT_LPAREN;
	v->a[7848] = anon_sym_GT_LPAREN;
	v->a[7849] = sym_word;
	v->a[7850] = 8;
	v->a[7851] = actions(3);
	v->a[7852] = 1;
	v->a[7853] = sym_comment;
	v->a[7854] = actions(1555);
	v->a[7855] = 1;
	v->a[7856] = anon_sym_DQUOTE;
	v->a[7857] = actions(2070);
	v->a[7858] = 1;
	v->a[7859] = sym_variable_name;
	small_parse_table_393(v);
}

void	small_parse_table_393(t_small_parse_table_array *v)
{
	v->a[7860] = state(1176);
	v->a[7861] = 1;
	v->a[7862] = sym_string;
	v->a[7863] = actions(2068);
	v->a[7864] = 2;
	v->a[7865] = aux_sym__simple_variable_name_token1;
	v->a[7866] = aux_sym__multiline_variable_name_token1;
	v->a[7867] = actions(1241);
	v->a[7868] = 4;
	v->a[7869] = sym_file_descriptor;
	v->a[7870] = sym_test_operator;
	v->a[7871] = sym__bare_dollar;
	v->a[7872] = sym__brace_start;
	v->a[7873] = actions(2066);
	v->a[7874] = 9;
	v->a[7875] = anon_sym_DASH;
	v->a[7876] = anon_sym_STAR;
	v->a[7877] = anon_sym_BANG;
	v->a[7878] = anon_sym_QMARK;
	v->a[7879] = anon_sym_DOLLAR;
	small_parse_table_394(v);
}

void	small_parse_table_394(t_small_parse_table_array *v)
{
	v->a[7880] = anon_sym_POUND;
	v->a[7881] = anon_sym_AT2;
	v->a[7882] = anon_sym_0;
	v->a[7883] = anon_sym__;
	v->a[7884] = actions(1239);
	v->a[7885] = 38;
	v->a[7886] = anon_sym_LPAREN_LPAREN;
	v->a[7887] = anon_sym_SEMI;
	v->a[7888] = anon_sym_PIPE_PIPE;
	v->a[7889] = anon_sym_AMP_AMP;
	v->a[7890] = anon_sym_PIPE;
	v->a[7891] = anon_sym_AMP;
	v->a[7892] = anon_sym_EQ_EQ;
	v->a[7893] = anon_sym_LT;
	v->a[7894] = anon_sym_GT;
	v->a[7895] = anon_sym_LT_LT;
	v->a[7896] = anon_sym_GT_GT;
	v->a[7897] = anon_sym_SEMI_SEMI;
	v->a[7898] = anon_sym_PIPE_AMP;
	v->a[7899] = anon_sym_EQ_TILDE;
	small_parse_table_395(v);
}

/* EOF small_parse_table_78.c */
