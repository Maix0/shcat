/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_165.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_825(t_small_parse_table_array *v)
{
	v->a[16500] = sym_simple_expansion;
	v->a[16501] = sym_expansion;
	v->a[16502] = sym_command_substitution;
	v->a[16503] = actions(455);
	v->a[16504] = 11;
	v->a[16505] = anon_sym_PIPE;
	v->a[16506] = anon_sym_RPAREN;
	v->a[16507] = anon_sym_SEMI_SEMI;
	v->a[16508] = anon_sym_AMP_AMP;
	v->a[16509] = anon_sym_PIPE_PIPE;
	v->a[16510] = anon_sym_LT;
	v->a[16511] = anon_sym_GT;
	v->a[16512] = anon_sym_GT_GT;
	v->a[16513] = anon_sym_LT_LT;
	v->a[16514] = aux_sym_heredoc_redirect_token1;
	v->a[16515] = anon_sym_SEMI;
	v->a[16516] = 13;
	v->a[16517] = actions(3);
	v->a[16518] = 1;
	v->a[16519] = sym_comment;
	small_parse_table_826(v);
}

void	small_parse_table_826(t_small_parse_table_array *v)
{
	v->a[16520] = actions(53);
	v->a[16521] = 1;
	v->a[16522] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16523] = actions(55);
	v->a[16524] = 1;
	v->a[16525] = anon_sym_DOLLAR;
	v->a[16526] = actions(57);
	v->a[16527] = 1;
	v->a[16528] = anon_sym_DQUOTE;
	v->a[16529] = actions(61);
	v->a[16530] = 1;
	v->a[16531] = anon_sym_DOLLAR_LBRACE;
	v->a[16532] = actions(63);
	v->a[16533] = 1;
	v->a[16534] = anon_sym_DOLLAR_LPAREN;
	v->a[16535] = actions(65);
	v->a[16536] = 1;
	v->a[16537] = anon_sym_BQUOTE;
	v->a[16538] = actions(419);
	v->a[16539] = 1;
	small_parse_table_827(v);
}

void	small_parse_table_827(t_small_parse_table_array *v)
{
	v->a[16540] = sym__bare_dollar;
	v->a[16541] = state(163);
	v->a[16542] = 1;
	v->a[16543] = aux_sym_command_repeat2;
	v->a[16544] = state(570);
	v->a[16545] = 1;
	v->a[16546] = sym_concatenation;
	v->a[16547] = actions(415);
	v->a[16548] = 3;
	v->a[16549] = sym_raw_string;
	v->a[16550] = sym_number;
	v->a[16551] = sym_word;
	v->a[16552] = state(289);
	v->a[16553] = 5;
	v->a[16554] = sym_arithmetic_expansion;
	v->a[16555] = sym_string;
	v->a[16556] = sym_simple_expansion;
	v->a[16557] = sym_expansion;
	v->a[16558] = sym_command_substitution;
	v->a[16559] = actions(403);
	small_parse_table_828(v);
}

void	small_parse_table_828(t_small_parse_table_array *v)
{
	v->a[16560] = 11;
	v->a[16561] = anon_sym_PIPE;
	v->a[16562] = anon_sym_RPAREN;
	v->a[16563] = anon_sym_SEMI_SEMI;
	v->a[16564] = anon_sym_AMP_AMP;
	v->a[16565] = anon_sym_PIPE_PIPE;
	v->a[16566] = anon_sym_LT;
	v->a[16567] = anon_sym_GT;
	v->a[16568] = anon_sym_GT_GT;
	v->a[16569] = anon_sym_LT_LT;
	v->a[16570] = aux_sym_heredoc_redirect_token1;
	v->a[16571] = anon_sym_SEMI;
	v->a[16572] = 12;
	v->a[16573] = actions(3);
	v->a[16574] = 1;
	v->a[16575] = sym_comment;
	v->a[16576] = actions(481);
	v->a[16577] = 1;
	v->a[16578] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16579] = actions(484);
	small_parse_table_829(v);
}

void	small_parse_table_829(t_small_parse_table_array *v)
{
	v->a[16580] = 1;
	v->a[16581] = anon_sym_DOLLAR;
	v->a[16582] = actions(487);
	v->a[16583] = 1;
	v->a[16584] = anon_sym_DQUOTE;
	v->a[16585] = actions(490);
	v->a[16586] = 1;
	v->a[16587] = anon_sym_DOLLAR_LBRACE;
	v->a[16588] = actions(493);
	v->a[16589] = 1;
	v->a[16590] = anon_sym_DOLLAR_LPAREN;
	v->a[16591] = actions(496);
	v->a[16592] = 1;
	v->a[16593] = anon_sym_BQUOTE;
	v->a[16594] = actions(448);
	v->a[16595] = 2;
	v->a[16596] = sym_variable_name;
	v->a[16597] = ts_builtin_sym_end;
	v->a[16598] = state(165);
	v->a[16599] = 2;
	small_parse_table_830(v);
}

/* EOF small_parse_table_165.c */
