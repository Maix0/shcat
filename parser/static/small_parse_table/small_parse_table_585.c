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
	v->a[58500] = 1;
	v->a[58501] = sym_file_descriptor;
	v->a[58502] = actions(3871);
	v->a[58503] = 1;
	v->a[58504] = anon_sym_RPAREN;
	v->a[58505] = actions(3637);
	v->a[58506] = 3;
	v->a[58507] = sym_variable_name;
	v->a[58508] = sym_test_operator;
	v->a[58509] = sym__brace_start;
	v->a[58510] = actions(3627);
	v->a[58511] = 9;
	v->a[58512] = anon_sym_PIPE;
	v->a[58513] = anon_sym_SEMI_SEMI;
	v->a[58514] = anon_sym_PIPE_AMP;
	v->a[58515] = anon_sym_AMP_AMP;
	v->a[58516] = anon_sym_PIPE_PIPE;
	v->a[58517] = anon_sym_LT_LT;
	v->a[58518] = anon_sym_LT_LT_DASH;
	v->a[58519] = anon_sym_AMP;
	small_parse_table_2926(v);
}

void	small_parse_table_2926(t_small_parse_table_array *v)
{
	v->a[58520] = anon_sym_SEMI;
	v->a[58521] = actions(3629);
	v->a[58522] = 10;
	v->a[58523] = anon_sym_LT;
	v->a[58524] = anon_sym_GT;
	v->a[58525] = anon_sym_GT_GT;
	v->a[58526] = anon_sym_AMP_GT;
	v->a[58527] = anon_sym_AMP_GT_GT;
	v->a[58528] = anon_sym_LT_AMP;
	v->a[58529] = anon_sym_GT_AMP;
	v->a[58530] = anon_sym_GT_PIPE;
	v->a[58531] = anon_sym_LT_AMP_DASH;
	v->a[58532] = anon_sym_GT_AMP_DASH;
	v->a[58533] = actions(3625);
	v->a[58534] = 12;
	v->a[58535] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58536] = anon_sym_DOLLAR;
	v->a[58537] = sym__special_character;
	v->a[58538] = anon_sym_DQUOTE;
	v->a[58539] = sym_raw_string;
	small_parse_table_2927(v);
}

void	small_parse_table_2927(t_small_parse_table_array *v)
{
	v->a[58540] = aux_sym_number_token1;
	v->a[58541] = aux_sym_number_token2;
	v->a[58542] = anon_sym_DOLLAR_LBRACE;
	v->a[58543] = anon_sym_DOLLAR_LPAREN;
	v->a[58544] = anon_sym_BQUOTE;
	v->a[58545] = anon_sym_DOLLAR_BQUOTE;
	v->a[58546] = sym_word;
	v->a[58547] = 5;
	v->a[58548] = actions(3);
	v->a[58549] = 1;
	v->a[58550] = sym_comment;
	v->a[58551] = actions(3874);
	v->a[58552] = 1;
	v->a[58553] = sym__special_character;
	v->a[58554] = state(1309);
	v->a[58555] = 1;
	v->a[58556] = aux_sym__literal_repeat1;
	v->a[58557] = actions(3519);
	v->a[58558] = 4;
	v->a[58559] = sym_file_descriptor;
	small_parse_table_2928(v);
}

void	small_parse_table_2928(t_small_parse_table_array *v)
{
	v->a[58560] = sym_test_operator;
	v->a[58561] = sym__brace_start;
	v->a[58562] = aux_sym_heredoc_redirect_token1;
	v->a[58563] = actions(3517);
	v->a[58564] = 31;
	v->a[58565] = anon_sym_PIPE;
	v->a[58566] = anon_sym_RPAREN;
	v->a[58567] = anon_sym_SEMI_SEMI;
	v->a[58568] = anon_sym_PIPE_AMP;
	v->a[58569] = anon_sym_AMP_AMP;
	v->a[58570] = anon_sym_PIPE_PIPE;
	v->a[58571] = anon_sym_LT;
	v->a[58572] = anon_sym_GT;
	v->a[58573] = anon_sym_GT_GT;
	v->a[58574] = anon_sym_AMP_GT;
	v->a[58575] = anon_sym_AMP_GT_GT;
	v->a[58576] = anon_sym_LT_AMP;
	v->a[58577] = anon_sym_GT_AMP;
	v->a[58578] = anon_sym_GT_PIPE;
	v->a[58579] = anon_sym_LT_AMP_DASH;
	small_parse_table_2929(v);
}

void	small_parse_table_2929(t_small_parse_table_array *v)
{
	v->a[58580] = anon_sym_GT_AMP_DASH;
	v->a[58581] = anon_sym_LT_LT;
	v->a[58582] = anon_sym_LT_LT_DASH;
	v->a[58583] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58584] = anon_sym_AMP;
	v->a[58585] = anon_sym_DOLLAR;
	v->a[58586] = anon_sym_DQUOTE;
	v->a[58587] = sym_raw_string;
	v->a[58588] = aux_sym_number_token1;
	v->a[58589] = aux_sym_number_token2;
	v->a[58590] = anon_sym_DOLLAR_LBRACE;
	v->a[58591] = anon_sym_DOLLAR_LPAREN;
	v->a[58592] = anon_sym_BQUOTE;
	v->a[58593] = anon_sym_DOLLAR_BQUOTE;
	v->a[58594] = sym_word;
	v->a[58595] = anon_sym_SEMI;
	v->a[58596] = 8;
	v->a[58597] = actions(3);
	v->a[58598] = 1;
	v->a[58599] = sym_comment;
	small_parse_table_2930(v);
}

/* EOF small_parse_table_585.c */
