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
	v->a[47500] = sym_command_substitution;
	v->a[47501] = 5;
	v->a[47502] = actions(3);
	v->a[47503] = 1;
	v->a[47504] = sym_comment;
	v->a[47505] = actions(792);
	v->a[47506] = 1;
	v->a[47507] = sym_variable_name;
	v->a[47508] = actions(1500);
	v->a[47509] = 1;
	v->a[47510] = sym_file_descriptor;
	v->a[47511] = actions(780);
	v->a[47512] = 8;
	v->a[47513] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47514] = anon_sym_DOLLAR;
	v->a[47515] = anon_sym_DQUOTE;
	v->a[47516] = sym_raw_string;
	v->a[47517] = sym_number;
	v->a[47518] = anon_sym_DOLLAR_LBRACE;
	v->a[47519] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2376(v);
}

void	small_parse_table_2376(t_small_parse_table_array *v)
{
	v->a[47520] = sym_word;
	v->a[47521] = actions(1498);
	v->a[47522] = 16;
	v->a[47523] = anon_sym_PIPE;
	v->a[47524] = anon_sym_SEMI_SEMI;
	v->a[47525] = anon_sym_AMP_AMP;
	v->a[47526] = anon_sym_PIPE_PIPE;
	v->a[47527] = anon_sym_LT;
	v->a[47528] = anon_sym_GT;
	v->a[47529] = anon_sym_GT_GT;
	v->a[47530] = anon_sym_LT_AMP;
	v->a[47531] = anon_sym_GT_AMP;
	v->a[47532] = anon_sym_GT_PIPE;
	v->a[47533] = anon_sym_LT_GT;
	v->a[47534] = anon_sym_LT_LT;
	v->a[47535] = anon_sym_LT_LT_DASH;
	v->a[47536] = aux_sym_heredoc_redirect_token1;
	v->a[47537] = anon_sym_BQUOTE;
	v->a[47538] = anon_sym_SEMI;
	v->a[47539] = 18;
	small_parse_table_2377(v);
}

void	small_parse_table_2377(t_small_parse_table_array *v)
{
	v->a[47540] = actions(3);
	v->a[47541] = 1;
	v->a[47542] = sym_comment;
	v->a[47543] = actions(1720);
	v->a[47544] = 1;
	v->a[47545] = anon_sym_LPAREN;
	v->a[47546] = actions(1724);
	v->a[47547] = 1;
	v->a[47548] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47549] = actions(1726);
	v->a[47550] = 1;
	v->a[47551] = anon_sym_DOLLAR;
	v->a[47552] = actions(1728);
	v->a[47553] = 1;
	v->a[47554] = anon_sym_DQUOTE;
	v->a[47555] = actions(1730);
	v->a[47556] = 1;
	v->a[47557] = anon_sym_DOLLAR_LBRACE;
	v->a[47558] = actions(1732);
	v->a[47559] = 1;
	small_parse_table_2378(v);
}

void	small_parse_table_2378(t_small_parse_table_array *v)
{
	v->a[47560] = anon_sym_DOLLAR_LPAREN;
	v->a[47561] = actions(1734);
	v->a[47562] = 1;
	v->a[47563] = anon_sym_BQUOTE;
	v->a[47564] = actions(1736);
	v->a[47565] = 1;
	v->a[47566] = sym_extglob_pattern;
	v->a[47567] = actions(1742);
	v->a[47568] = 1;
	v->a[47569] = anon_sym_esac;
	v->a[47570] = state(912);
	v->a[47571] = 1;
	v->a[47572] = sym_terminator;
	v->a[47573] = state(1023);
	v->a[47574] = 1;
	v->a[47575] = aux_sym_case_statement_repeat1;
	v->a[47576] = state(1682);
	v->a[47577] = 1;
	v->a[47578] = sym_case_item;
	v->a[47579] = state(1939);
	small_parse_table_2379(v);
}

void	small_parse_table_2379(t_small_parse_table_array *v)
{
	v->a[47580] = 1;
	v->a[47581] = sym__case_item_last;
	v->a[47582] = state(1877);
	v->a[47583] = 2;
	v->a[47584] = sym_concatenation;
	v->a[47585] = sym__extglob_blob;
	v->a[47586] = actions(1716);
	v->a[47587] = 3;
	v->a[47588] = sym_raw_string;
	v->a[47589] = sym_number;
	v->a[47590] = sym_word;
	v->a[47591] = actions(1722);
	v->a[47592] = 3;
	v->a[47593] = anon_sym_SEMI_SEMI;
	v->a[47594] = aux_sym_heredoc_redirect_token1;
	v->a[47595] = anon_sym_SEMI;
	v->a[47596] = state(1772);
	v->a[47597] = 5;
	v->a[47598] = sym_arithmetic_expansion;
	v->a[47599] = sym_string;
	small_parse_table_2380(v);
}

/* EOF small_parse_table_475.c */
