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
	v->a[47500] = sym_file_descriptor;
	v->a[47501] = actions(1706);
	v->a[47502] = 1;
	v->a[47503] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47504] = actions(1709);
	v->a[47505] = 1;
	v->a[47506] = anon_sym_DOLLAR;
	v->a[47507] = actions(1712);
	v->a[47508] = 1;
	v->a[47509] = anon_sym_DQUOTE;
	v->a[47510] = actions(1715);
	v->a[47511] = 1;
	v->a[47512] = anon_sym_DOLLAR_LBRACE;
	v->a[47513] = actions(1718);
	v->a[47514] = 1;
	v->a[47515] = anon_sym_DOLLAR_LPAREN;
	v->a[47516] = actions(1721);
	v->a[47517] = 1;
	v->a[47518] = anon_sym_BQUOTE;
	v->a[47519] = state(774);
	small_parse_table_2376(v);
}

void	small_parse_table_2376(t_small_parse_table_array *v)
{
	v->a[47520] = 2;
	v->a[47521] = sym_concatenation;
	v->a[47522] = aux_sym_for_statement_repeat1;
	v->a[47523] = actions(1703);
	v->a[47524] = 3;
	v->a[47525] = sym_raw_string;
	v->a[47526] = sym_number;
	v->a[47527] = sym_word;
	v->a[47528] = state(917);
	v->a[47529] = 5;
	v->a[47530] = sym_arithmetic_expansion;
	v->a[47531] = sym_string;
	v->a[47532] = sym_simple_expansion;
	v->a[47533] = sym_expansion;
	v->a[47534] = sym_command_substitution;
	v->a[47535] = actions(520);
	v->a[47536] = 10;
	v->a[47537] = anon_sym_AMP_AMP;
	v->a[47538] = anon_sym_PIPE_PIPE;
	v->a[47539] = anon_sym_LT;
	small_parse_table_2377(v);
}

void	small_parse_table_2377(t_small_parse_table_array *v)
{
	v->a[47540] = anon_sym_GT;
	v->a[47541] = anon_sym_GT_GT;
	v->a[47542] = anon_sym_LT_AMP;
	v->a[47543] = anon_sym_GT_AMP;
	v->a[47544] = anon_sym_GT_PIPE;
	v->a[47545] = anon_sym_LT_GT;
	v->a[47546] = aux_sym_heredoc_redirect_token1;
	v->a[47547] = 3;
	v->a[47548] = actions(3);
	v->a[47549] = 1;
	v->a[47550] = sym_comment;
	v->a[47551] = actions(744);
	v->a[47552] = 3;
	v->a[47553] = sym_file_descriptor;
	v->a[47554] = sym__concat;
	v->a[47555] = sym__bare_dollar;
	v->a[47556] = actions(742);
	v->a[47557] = 23;
	v->a[47558] = anon_sym_LPAREN;
	v->a[47559] = anon_sym_PIPE;
	small_parse_table_2378(v);
}

void	small_parse_table_2378(t_small_parse_table_array *v)
{
	v->a[47560] = anon_sym_AMP_AMP;
	v->a[47561] = anon_sym_PIPE_PIPE;
	v->a[47562] = anon_sym_LT;
	v->a[47563] = anon_sym_GT;
	v->a[47564] = anon_sym_GT_GT;
	v->a[47565] = anon_sym_LT_AMP;
	v->a[47566] = anon_sym_GT_AMP;
	v->a[47567] = anon_sym_GT_PIPE;
	v->a[47568] = anon_sym_LT_GT;
	v->a[47569] = anon_sym_LT_LT;
	v->a[47570] = anon_sym_LT_LT_DASH;
	v->a[47571] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47572] = aux_sym_concatenation_token1;
	v->a[47573] = anon_sym_DOLLAR;
	v->a[47574] = anon_sym_DQUOTE;
	v->a[47575] = sym_raw_string;
	v->a[47576] = sym_number;
	v->a[47577] = anon_sym_DOLLAR_LBRACE;
	v->a[47578] = anon_sym_DOLLAR_LPAREN;
	v->a[47579] = anon_sym_BQUOTE;
	small_parse_table_2379(v);
}

void	small_parse_table_2379(t_small_parse_table_array *v)
{
	v->a[47580] = sym_word;
	v->a[47581] = 3;
	v->a[47582] = actions(3);
	v->a[47583] = 1;
	v->a[47584] = sym_comment;
	v->a[47585] = actions(1200);
	v->a[47586] = 3;
	v->a[47587] = sym_file_descriptor;
	v->a[47588] = sym__concat;
	v->a[47589] = sym__bare_dollar;
	v->a[47590] = actions(1198);
	v->a[47591] = 23;
	v->a[47592] = anon_sym_LPAREN;
	v->a[47593] = anon_sym_PIPE;
	v->a[47594] = anon_sym_AMP_AMP;
	v->a[47595] = anon_sym_PIPE_PIPE;
	v->a[47596] = anon_sym_LT;
	v->a[47597] = anon_sym_GT;
	v->a[47598] = anon_sym_GT_GT;
	v->a[47599] = anon_sym_LT_AMP;
	small_parse_table_2380(v);
}

/* EOF small_parse_table_475.c */
