/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_440.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2200(t_small_parse_table_array *v)
{
	v->a[44000] = anon_sym_DOLLAR_LBRACE;
	v->a[44001] = anon_sym_DOLLAR_LPAREN;
	v->a[44002] = anon_sym_BQUOTE;
	v->a[44003] = sym_word;
	v->a[44004] = anon_sym_SEMI;
	v->a[44005] = 12;
	v->a[44006] = actions(3);
	v->a[44007] = 1;
	v->a[44008] = sym_comment;
	v->a[44009] = actions(575);
	v->a[44010] = 1;
	v->a[44011] = sym_file_descriptor;
	v->a[44012] = actions(1504);
	v->a[44013] = 1;
	v->a[44014] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44015] = actions(1506);
	v->a[44016] = 1;
	v->a[44017] = anon_sym_DOLLAR;
	v->a[44018] = actions(1508);
	v->a[44019] = 1;
	small_parse_table_2201(v);
}

void	small_parse_table_2201(t_small_parse_table_array *v)
{
	v->a[44020] = anon_sym_DQUOTE;
	v->a[44021] = actions(1510);
	v->a[44022] = 1;
	v->a[44023] = anon_sym_DOLLAR_LBRACE;
	v->a[44024] = actions(1512);
	v->a[44025] = 1;
	v->a[44026] = anon_sym_DOLLAR_LPAREN;
	v->a[44027] = actions(1514);
	v->a[44028] = 1;
	v->a[44029] = anon_sym_BQUOTE;
	v->a[44030] = state(631);
	v->a[44031] = 2;
	v->a[44032] = sym_concatenation;
	v->a[44033] = aux_sym_for_statement_repeat1;
	v->a[44034] = actions(1502);
	v->a[44035] = 3;
	v->a[44036] = sym_raw_string;
	v->a[44037] = sym_number;
	v->a[44038] = sym_word;
	v->a[44039] = state(926);
	small_parse_table_2202(v);
}

void	small_parse_table_2202(t_small_parse_table_array *v)
{
	v->a[44040] = 5;
	v->a[44041] = sym_arithmetic_expansion;
	v->a[44042] = sym_string;
	v->a[44043] = sym_simple_expansion;
	v->a[44044] = sym_expansion;
	v->a[44045] = sym_command_substitution;
	v->a[44046] = actions(573);
	v->a[44047] = 13;
	v->a[44048] = anon_sym_PIPE;
	v->a[44049] = anon_sym_AMP_AMP;
	v->a[44050] = anon_sym_PIPE_PIPE;
	v->a[44051] = anon_sym_LT;
	v->a[44052] = anon_sym_GT;
	v->a[44053] = anon_sym_GT_GT;
	v->a[44054] = anon_sym_LT_AMP;
	v->a[44055] = anon_sym_GT_AMP;
	v->a[44056] = anon_sym_GT_PIPE;
	v->a[44057] = anon_sym_LT_AMP_DASH;
	v->a[44058] = anon_sym_GT_AMP_DASH;
	v->a[44059] = anon_sym_LT_LT;
	small_parse_table_2203(v);
}

void	small_parse_table_2203(t_small_parse_table_array *v)
{
	v->a[44060] = anon_sym_LT_LT_DASH;
	v->a[44061] = 3;
	v->a[44062] = actions(3);
	v->a[44063] = 1;
	v->a[44064] = sym_comment;
	v->a[44065] = actions(1015);
	v->a[44066] = 2;
	v->a[44067] = sym_file_descriptor;
	v->a[44068] = sym__concat;
	v->a[44069] = actions(1013);
	v->a[44070] = 28;
	v->a[44071] = anon_sym_esac;
	v->a[44072] = anon_sym_PIPE;
	v->a[44073] = anon_sym_SEMI_SEMI;
	v->a[44074] = anon_sym_AMP_AMP;
	v->a[44075] = anon_sym_PIPE_PIPE;
	v->a[44076] = anon_sym_LT;
	v->a[44077] = anon_sym_GT;
	v->a[44078] = anon_sym_GT_GT;
	v->a[44079] = anon_sym_LT_AMP;
	small_parse_table_2204(v);
}

void	small_parse_table_2204(t_small_parse_table_array *v)
{
	v->a[44080] = anon_sym_GT_AMP;
	v->a[44081] = anon_sym_GT_PIPE;
	v->a[44082] = anon_sym_LT_AMP_DASH;
	v->a[44083] = anon_sym_GT_AMP_DASH;
	v->a[44084] = anon_sym_LT_LT;
	v->a[44085] = anon_sym_LT_LT_DASH;
	v->a[44086] = aux_sym_heredoc_redirect_token1;
	v->a[44087] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44088] = anon_sym_AMP;
	v->a[44089] = aux_sym_concatenation_token1;
	v->a[44090] = anon_sym_DOLLAR;
	v->a[44091] = anon_sym_DQUOTE;
	v->a[44092] = sym_raw_string;
	v->a[44093] = sym_number;
	v->a[44094] = anon_sym_DOLLAR_LBRACE;
	v->a[44095] = anon_sym_DOLLAR_LPAREN;
	v->a[44096] = anon_sym_BQUOTE;
	v->a[44097] = sym_word;
	v->a[44098] = anon_sym_SEMI;
	v->a[44099] = 3;
	small_parse_table_2205(v);
}

/* EOF small_parse_table_440.c */
