/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1840.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9200(t_small_parse_table_array *v)
{
	v->a[184000] = actions(7236);
	v->a[184001] = 1;
	v->a[184002] = anon_sym_BQUOTE;
	v->a[184003] = actions(7238);
	v->a[184004] = 1;
	v->a[184005] = anon_sym_DOLLAR_BQUOTE;
	v->a[184006] = state(6426);
	v->a[184007] = 1;
	v->a[184008] = aux_sym__literal_repeat1;
	v->a[184009] = state(7440);
	v->a[184010] = 1;
	v->a[184011] = sym_last_case_item;
	v->a[184012] = actions(7224);
	v->a[184013] = 2;
	v->a[184014] = anon_sym_LPAREN_LPAREN;
	v->a[184015] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[184016] = actions(7232);
	v->a[184017] = 2;
	v->a[184018] = sym_raw_string;
	v->a[184019] = sym_ansi_c_string;
	small_parse_table_9201(v);
}

void	small_parse_table_9201(t_small_parse_table_array *v)
{
	v->a[184020] = actions(7240);
	v->a[184021] = 2;
	v->a[184022] = anon_sym_LT_LPAREN;
	v->a[184023] = anon_sym_GT_LPAREN;
	v->a[184024] = state(3477);
	v->a[184025] = 2;
	v->a[184026] = sym_case_item;
	v->a[184027] = aux_sym_case_statement_repeat1;
	v->a[184028] = state(6695);
	v->a[184029] = 2;
	v->a[184030] = sym_concatenation;
	v->a[184031] = sym__extglob_blob;
	v->a[184032] = state(6303);
	v->a[184033] = 9;
	v->a[184034] = sym_arithmetic_expansion;
	v->a[184035] = sym_brace_expression;
	v->a[184036] = sym_string;
	v->a[184037] = sym_translated_string;
	v->a[184038] = sym_number;
	v->a[184039] = sym_simple_expansion;
	small_parse_table_9202(v);
}

void	small_parse_table_9202(t_small_parse_table_array *v)
{
	v->a[184040] = sym_expansion;
	v->a[184041] = sym_command_substitution;
	v->a[184042] = sym_process_substitution;
	v->a[184043] = 6;
	v->a[184044] = actions(71);
	v->a[184045] = 1;
	v->a[184046] = sym_comment;
	v->a[184047] = actions(7595);
	v->a[184048] = 1;
	v->a[184049] = anon_sym_STAR_STAR;
	v->a[184050] = actions(7569);
	v->a[184051] = 2;
	v->a[184052] = anon_sym_PLUS_PLUS;
	v->a[184053] = anon_sym_DASH_DASH;
	v->a[184054] = actions(7593);
	v->a[184055] = 3;
	v->a[184056] = anon_sym_STAR;
	v->a[184057] = anon_sym_SLASH;
	v->a[184058] = anon_sym_PERCENT;
	v->a[184059] = actions(7139);
	small_parse_table_9203(v);
}

void	small_parse_table_9203(t_small_parse_table_array *v)
{
	v->a[184060] = 10;
	v->a[184061] = anon_sym_EQ;
	v->a[184062] = anon_sym_PIPE;
	v->a[184063] = anon_sym_CARET;
	v->a[184064] = anon_sym_AMP;
	v->a[184065] = anon_sym_LT;
	v->a[184066] = anon_sym_GT;
	v->a[184067] = anon_sym_LT_LT;
	v->a[184068] = anon_sym_GT_GT;
	v->a[184069] = anon_sym_PLUS;
	v->a[184070] = anon_sym_DASH;
	v->a[184071] = actions(7137);
	v->a[184072] = 20;
	v->a[184073] = anon_sym_PLUS_EQ;
	v->a[184074] = anon_sym_DASH_EQ;
	v->a[184075] = anon_sym_STAR_EQ;
	v->a[184076] = anon_sym_SLASH_EQ;
	v->a[184077] = anon_sym_PERCENT_EQ;
	v->a[184078] = anon_sym_STAR_STAR_EQ;
	v->a[184079] = anon_sym_LT_LT_EQ;
	small_parse_table_9204(v);
}

void	small_parse_table_9204(t_small_parse_table_array *v)
{
	v->a[184080] = anon_sym_GT_GT_EQ;
	v->a[184081] = anon_sym_AMP_EQ;
	v->a[184082] = anon_sym_CARET_EQ;
	v->a[184083] = anon_sym_PIPE_EQ;
	v->a[184084] = anon_sym_PIPE_PIPE;
	v->a[184085] = anon_sym_AMP_AMP;
	v->a[184086] = anon_sym_EQ_EQ;
	v->a[184087] = anon_sym_BANG_EQ;
	v->a[184088] = anon_sym_LT_EQ;
	v->a[184089] = anon_sym_GT_EQ;
	v->a[184090] = anon_sym_RBRACK;
	v->a[184091] = anon_sym_EQ_TILDE;
	v->a[184092] = anon_sym_QMARK;
	v->a[184093] = 7;
	v->a[184094] = actions(71);
	v->a[184095] = 1;
	v->a[184096] = sym_comment;
	v->a[184097] = actions(7595);
	v->a[184098] = 1;
	v->a[184099] = anon_sym_STAR_STAR;
	small_parse_table_9205(v);
}

/* EOF small_parse_table_1840.c */
