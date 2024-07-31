/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_475.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2375(t_small_parse_table_array *v)
{
	v->a[47500] = anon_sym_GT_PIPE;
	v->a[47501] = anon_sym_LT_GT;
	v->a[47502] = 12;
	v->a[47503] = actions(3);
	v->a[47504] = 1;
	v->a[47505] = sym_comment;
	v->a[47506] = actions(930);
	v->a[47507] = 1;
	v->a[47508] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47509] = actions(932);
	v->a[47510] = 1;
	v->a[47511] = anon_sym_DOLLAR;
	v->a[47512] = actions(934);
	v->a[47513] = 1;
	v->a[47514] = anon_sym_DQUOTE;
	v->a[47515] = actions(936);
	v->a[47516] = 1;
	v->a[47517] = anon_sym_DOLLAR_LBRACE;
	v->a[47518] = actions(938);
	v->a[47519] = 1;
	small_parse_table_2376(v);
}

void	small_parse_table_2376(t_small_parse_table_array *v)
{
	v->a[47520] = anon_sym_DOLLAR_LPAREN;
	v->a[47521] = actions(940);
	v->a[47522] = 1;
	v->a[47523] = anon_sym_BQUOTE;
	v->a[47524] = state(1612);
	v->a[47525] = 1;
	v->a[47526] = sym_terminator;
	v->a[47527] = state(945);
	v->a[47528] = 2;
	v->a[47529] = sym_concatenation;
	v->a[47530] = aux_sym_for_statement_repeat1;
	v->a[47531] = actions(1607);
	v->a[47532] = 3;
	v->a[47533] = sym_raw_string;
	v->a[47534] = sym_number;
	v->a[47535] = sym_word;
	v->a[47536] = actions(1609);
	v->a[47537] = 3;
	v->a[47538] = anon_sym_SEMI_SEMI;
	v->a[47539] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2377(v);
}

void	small_parse_table_2377(t_small_parse_table_array *v)
{
	v->a[47540] = anon_sym_SEMI;
	v->a[47541] = state(1227);
	v->a[47542] = 5;
	v->a[47543] = sym_arithmetic_expansion;
	v->a[47544] = sym_string;
	v->a[47545] = sym_simple_expansion;
	v->a[47546] = sym_expansion;
	v->a[47547] = sym_command_substitution;
	v->a[47548] = 10;
	v->a[47549] = actions(3);
	v->a[47550] = 1;
	v->a[47551] = sym_comment;
	v->a[47552] = actions(746);
	v->a[47553] = 1;
	v->a[47554] = anon_sym_PIPE;
	v->a[47555] = actions(844);
	v->a[47556] = 1;
	v->a[47557] = ts_builtin_sym_end;
	v->a[47558] = actions(1605);
	v->a[47559] = 1;
	small_parse_table_2378(v);
}

void	small_parse_table_2378(t_small_parse_table_array *v)
{
	v->a[47560] = aux_sym_heredoc_redirect_token1;
	v->a[47561] = state(597);
	v->a[47562] = 1;
	v->a[47563] = sym_terminator;
	v->a[47564] = actions(846);
	v->a[47565] = 2;
	v->a[47566] = anon_sym_SEMI_SEMI;
	v->a[47567] = anon_sym_SEMI;
	v->a[47568] = actions(848);
	v->a[47569] = 2;
	v->a[47570] = anon_sym_AMP_AMP;
	v->a[47571] = anon_sym_PIPE_PIPE;
	v->a[47572] = actions(850);
	v->a[47573] = 2;
	v->a[47574] = anon_sym_LT_LT;
	v->a[47575] = anon_sym_LT_LT_DASH;
	v->a[47576] = state(924);
	v->a[47577] = 3;
	v->a[47578] = sym_file_redirect;
	v->a[47579] = sym_heredoc_redirect;
	small_parse_table_2379(v);
}

void	small_parse_table_2379(t_small_parse_table_array *v)
{
	v->a[47580] = aux_sym_redirected_statement_repeat1;
	v->a[47581] = actions(1603);
	v->a[47582] = 7;
	v->a[47583] = anon_sym_LT;
	v->a[47584] = anon_sym_GT;
	v->a[47585] = anon_sym_GT_GT;
	v->a[47586] = anon_sym_LT_AMP;
	v->a[47587] = anon_sym_GT_AMP;
	v->a[47588] = anon_sym_GT_PIPE;
	v->a[47589] = anon_sym_LT_GT;
	v->a[47590] = 10;
	v->a[47591] = actions(3);
	v->a[47592] = 1;
	v->a[47593] = sym_comment;
	v->a[47594] = actions(746);
	v->a[47595] = 1;
	v->a[47596] = anon_sym_PIPE;
	v->a[47597] = actions(844);
	v->a[47598] = 1;
	v->a[47599] = ts_builtin_sym_end;
	small_parse_table_2380(v);
}

/* EOF small_parse_table_475.c */
