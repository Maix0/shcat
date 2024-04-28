/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1400.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7000(t_small_parse_table_array *v)
{
	v->a[140000] = anon_sym_AMP_AMP;
	v->a[140001] = anon_sym_EQ_EQ;
	v->a[140002] = anon_sym_BANG_EQ;
	v->a[140003] = anon_sym_LT_EQ;
	v->a[140004] = anon_sym_GT_EQ;
	v->a[140005] = anon_sym_RPAREN;
	v->a[140006] = anon_sym_EQ_TILDE;
	v->a[140007] = anon_sym_QMARK;
	v->a[140008] = aux_sym_concatenation_token1;
	v->a[140009] = 3;
	v->a[140010] = actions(71);
	v->a[140011] = 1;
	v->a[140012] = sym_comment;
	v->a[140013] = actions(1340);
	v->a[140014] = 13;
	v->a[140015] = anon_sym_PIPE;
	v->a[140016] = anon_sym_LT;
	v->a[140017] = anon_sym_GT;
	v->a[140018] = anon_sym_LT_LT;
	v->a[140019] = anon_sym_AMP_GT;
	small_parse_table_7001(v);
}

void	small_parse_table_7001(t_small_parse_table_array *v)
{
	v->a[140020] = anon_sym_LT_AMP;
	v->a[140021] = anon_sym_GT_AMP;
	v->a[140022] = anon_sym_DOLLAR;
	v->a[140023] = aux_sym_number_token1;
	v->a[140024] = aux_sym_number_token2;
	v->a[140025] = anon_sym_DOLLAR_LPAREN;
	v->a[140026] = anon_sym_BQUOTE;
	v->a[140027] = sym_word;
	v->a[140028] = actions(1342);
	v->a[140029] = 26;
	v->a[140030] = sym_file_descriptor;
	v->a[140031] = sym__concat;
	v->a[140032] = sym_test_operator;
	v->a[140033] = sym__brace_start;
	v->a[140034] = anon_sym_LPAREN_LPAREN;
	v->a[140035] = anon_sym_PIPE_PIPE;
	v->a[140036] = anon_sym_AMP_AMP;
	v->a[140037] = anon_sym_GT_GT;
	v->a[140038] = anon_sym_PIPE_AMP;
	v->a[140039] = anon_sym_AMP_GT_GT;
	small_parse_table_7002(v);
}

void	small_parse_table_7002(t_small_parse_table_array *v)
{
	v->a[140040] = anon_sym_GT_PIPE;
	v->a[140041] = anon_sym_LT_AMP_DASH;
	v->a[140042] = anon_sym_GT_AMP_DASH;
	v->a[140043] = anon_sym_LT_LT_DASH;
	v->a[140044] = anon_sym_LT_LT_LT;
	v->a[140045] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[140046] = anon_sym_DOLLAR_LBRACK;
	v->a[140047] = aux_sym_concatenation_token1;
	v->a[140048] = sym__special_character;
	v->a[140049] = anon_sym_DQUOTE;
	v->a[140050] = sym_raw_string;
	v->a[140051] = sym_ansi_c_string;
	v->a[140052] = anon_sym_DOLLAR_LBRACE;
	v->a[140053] = anon_sym_DOLLAR_BQUOTE;
	v->a[140054] = anon_sym_LT_LPAREN;
	v->a[140055] = anon_sym_GT_LPAREN;
	v->a[140056] = 3;
	v->a[140057] = actions(71);
	v->a[140058] = 1;
	v->a[140059] = sym_comment;
	small_parse_table_7003(v);
}

void	small_parse_table_7003(t_small_parse_table_array *v)
{
	v->a[140060] = actions(1312);
	v->a[140061] = 13;
	v->a[140062] = anon_sym_PIPE;
	v->a[140063] = anon_sym_LT;
	v->a[140064] = anon_sym_GT;
	v->a[140065] = anon_sym_LT_LT;
	v->a[140066] = anon_sym_AMP_GT;
	v->a[140067] = anon_sym_LT_AMP;
	v->a[140068] = anon_sym_GT_AMP;
	v->a[140069] = anon_sym_DOLLAR;
	v->a[140070] = aux_sym_number_token1;
	v->a[140071] = aux_sym_number_token2;
	v->a[140072] = anon_sym_DOLLAR_LPAREN;
	v->a[140073] = anon_sym_BQUOTE;
	v->a[140074] = sym_word;
	v->a[140075] = actions(1314);
	v->a[140076] = 26;
	v->a[140077] = sym_file_descriptor;
	v->a[140078] = sym__concat;
	v->a[140079] = sym_test_operator;
	small_parse_table_7004(v);
}

void	small_parse_table_7004(t_small_parse_table_array *v)
{
	v->a[140080] = sym__brace_start;
	v->a[140081] = anon_sym_LPAREN_LPAREN;
	v->a[140082] = anon_sym_PIPE_PIPE;
	v->a[140083] = anon_sym_AMP_AMP;
	v->a[140084] = anon_sym_GT_GT;
	v->a[140085] = anon_sym_PIPE_AMP;
	v->a[140086] = anon_sym_AMP_GT_GT;
	v->a[140087] = anon_sym_GT_PIPE;
	v->a[140088] = anon_sym_LT_AMP_DASH;
	v->a[140089] = anon_sym_GT_AMP_DASH;
	v->a[140090] = anon_sym_LT_LT_DASH;
	v->a[140091] = anon_sym_LT_LT_LT;
	v->a[140092] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[140093] = anon_sym_DOLLAR_LBRACK;
	v->a[140094] = aux_sym_concatenation_token1;
	v->a[140095] = sym__special_character;
	v->a[140096] = anon_sym_DQUOTE;
	v->a[140097] = sym_raw_string;
	v->a[140098] = sym_ansi_c_string;
	v->a[140099] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_7005(v);
}

/* EOF small_parse_table_1400.c */
