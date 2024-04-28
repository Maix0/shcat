/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_585.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2925(t_small_parse_table_array *v)
{
	v->a[58500] = sym_ansi_c_string;
	v->a[58501] = aux_sym_number_token1;
	v->a[58502] = aux_sym_number_token2;
	v->a[58503] = anon_sym_DOLLAR_LBRACE;
	v->a[58504] = anon_sym_DOLLAR_LPAREN;
	v->a[58505] = anon_sym_BQUOTE;
	v->a[58506] = anon_sym_DOLLAR_BQUOTE;
	v->a[58507] = anon_sym_LT_LPAREN;
	v->a[58508] = anon_sym_GT_LPAREN;
	v->a[58509] = sym_word;
	v->a[58510] = 9;
	v->a[58511] = actions(71);
	v->a[58512] = 1;
	v->a[58513] = sym_comment;
	v->a[58514] = actions(5546);
	v->a[58515] = 1;
	v->a[58516] = anon_sym_DQUOTE;
	v->a[58517] = actions(5548);
	v->a[58518] = 1;
	v->a[58519] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2926(v);
}

void	small_parse_table_2926(t_small_parse_table_array *v)
{
	v->a[58520] = actions(5550);
	v->a[58521] = 1;
	v->a[58522] = anon_sym_DOLLAR_LPAREN;
	v->a[58523] = actions(5552);
	v->a[58524] = 1;
	v->a[58525] = anon_sym_BQUOTE;
	v->a[58526] = actions(5554);
	v->a[58527] = 1;
	v->a[58528] = anon_sym_DOLLAR_BQUOTE;
	v->a[58529] = state(2601);
	v->a[58530] = 3;
	v->a[58531] = sym_string;
	v->a[58532] = sym_expansion;
	v->a[58533] = sym_command_substitution;
	v->a[58534] = actions(5435);
	v->a[58535] = 14;
	v->a[58536] = anon_sym_EQ;
	v->a[58537] = anon_sym_PIPE;
	v->a[58538] = anon_sym_CARET;
	v->a[58539] = anon_sym_AMP;
	small_parse_table_2927(v);
}

void	small_parse_table_2927(t_small_parse_table_array *v)
{
	v->a[58540] = anon_sym_LT;
	v->a[58541] = anon_sym_GT;
	v->a[58542] = anon_sym_LT_LT;
	v->a[58543] = anon_sym_GT_GT;
	v->a[58544] = anon_sym_PLUS;
	v->a[58545] = anon_sym_DASH;
	v->a[58546] = anon_sym_STAR;
	v->a[58547] = anon_sym_SLASH;
	v->a[58548] = anon_sym_PERCENT;
	v->a[58549] = anon_sym_STAR_STAR;
	v->a[58550] = actions(5433);
	v->a[58551] = 24;
	v->a[58552] = sym__concat;
	v->a[58553] = sym_test_operator;
	v->a[58554] = anon_sym_PLUS_PLUS;
	v->a[58555] = anon_sym_DASH_DASH;
	v->a[58556] = anon_sym_PLUS_EQ;
	v->a[58557] = anon_sym_DASH_EQ;
	v->a[58558] = anon_sym_STAR_EQ;
	v->a[58559] = anon_sym_SLASH_EQ;
	small_parse_table_2928(v);
}

void	small_parse_table_2928(t_small_parse_table_array *v)
{
	v->a[58560] = anon_sym_PERCENT_EQ;
	v->a[58561] = anon_sym_STAR_STAR_EQ;
	v->a[58562] = anon_sym_LT_LT_EQ;
	v->a[58563] = anon_sym_GT_GT_EQ;
	v->a[58564] = anon_sym_AMP_EQ;
	v->a[58565] = anon_sym_CARET_EQ;
	v->a[58566] = anon_sym_PIPE_EQ;
	v->a[58567] = anon_sym_PIPE_PIPE;
	v->a[58568] = anon_sym_AMP_AMP;
	v->a[58569] = anon_sym_EQ_EQ;
	v->a[58570] = anon_sym_BANG_EQ;
	v->a[58571] = anon_sym_LT_EQ;
	v->a[58572] = anon_sym_GT_EQ;
	v->a[58573] = anon_sym_RBRACK;
	v->a[58574] = anon_sym_EQ_TILDE;
	v->a[58575] = anon_sym_QMARK;
	v->a[58576] = 5;
	v->a[58577] = actions(3);
	v->a[58578] = 1;
	v->a[58579] = sym_comment;
	small_parse_table_2929(v);
}

void	small_parse_table_2929(t_small_parse_table_array *v)
{
	v->a[58580] = actions(5556);
	v->a[58581] = 1;
	v->a[58582] = sym__special_character;
	v->a[58583] = state(1313);
	v->a[58584] = 1;
	v->a[58585] = aux_sym__literal_repeat1;
	v->a[58586] = actions(1364);
	v->a[58587] = 6;
	v->a[58588] = sym_file_descriptor;
	v->a[58589] = sym_test_operator;
	v->a[58590] = sym__bare_dollar;
	v->a[58591] = sym__brace_start;
	v->a[58592] = ts_builtin_sym_end;
	v->a[58593] = aux_sym_heredoc_redirect_token1;
	v->a[58594] = actions(1362);
	v->a[58595] = 38;
	v->a[58596] = anon_sym_LPAREN_LPAREN;
	v->a[58597] = anon_sym_SEMI;
	v->a[58598] = anon_sym_PIPE_PIPE;
	v->a[58599] = anon_sym_AMP_AMP;
	small_parse_table_2930(v);
}

/* EOF small_parse_table_585.c */
