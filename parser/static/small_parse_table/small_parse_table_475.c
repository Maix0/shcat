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
	v->a[47500] = 1;
	v->a[47501] = anon_sym_DOLLAR_LBRACE;
	v->a[47502] = actions(1645);
	v->a[47503] = 1;
	v->a[47504] = anon_sym_DOLLAR_LPAREN;
	v->a[47505] = actions(1647);
	v->a[47506] = 1;
	v->a[47507] = anon_sym_BQUOTE;
	v->a[47508] = state(1755);
	v->a[47509] = 1;
	v->a[47510] = sym_concatenation;
	v->a[47511] = actions(1652);
	v->a[47512] = 3;
	v->a[47513] = sym_raw_string;
	v->a[47514] = sym_number;
	v->a[47515] = sym_word;
	v->a[47516] = state(1476);
	v->a[47517] = 5;
	v->a[47518] = sym_arithmetic_expansion;
	v->a[47519] = sym_string;
	small_parse_table_2376(v);
}

void	small_parse_table_2376(t_small_parse_table_array *v)
{
	v->a[47520] = sym_simple_expansion;
	v->a[47521] = sym_expansion;
	v->a[47522] = sym_command_substitution;
	v->a[47523] = actions(788);
	v->a[47524] = 13;
	v->a[47525] = anon_sym_PIPE;
	v->a[47526] = anon_sym_AMP_AMP;
	v->a[47527] = anon_sym_PIPE_PIPE;
	v->a[47528] = anon_sym_LT;
	v->a[47529] = anon_sym_GT;
	v->a[47530] = anon_sym_GT_GT;
	v->a[47531] = anon_sym_LT_AMP;
	v->a[47532] = anon_sym_GT_AMP;
	v->a[47533] = anon_sym_GT_PIPE;
	v->a[47534] = anon_sym_LT_AMP_DASH;
	v->a[47535] = anon_sym_GT_AMP_DASH;
	v->a[47536] = anon_sym_LT_LT;
	v->a[47537] = anon_sym_LT_LT_DASH;
	v->a[47538] = 4;
	v->a[47539] = actions(3);
	small_parse_table_2377(v);
}

void	small_parse_table_2377(t_small_parse_table_array *v)
{
	v->a[47540] = 1;
	v->a[47541] = sym_comment;
	v->a[47542] = actions(1575);
	v->a[47543] = 2;
	v->a[47544] = anon_sym_RPAREN;
	v->a[47545] = anon_sym_SEMI_SEMI;
	v->a[47546] = actions(1577);
	v->a[47547] = 2;
	v->a[47548] = sym_file_descriptor;
	v->a[47549] = sym_variable_name;
	v->a[47550] = actions(1573);
	v->a[47551] = 25;
	v->a[47552] = anon_sym_for;
	v->a[47553] = anon_sym_while;
	v->a[47554] = anon_sym_until;
	v->a[47555] = anon_sym_if;
	v->a[47556] = anon_sym_case;
	v->a[47557] = anon_sym_LPAREN;
	v->a[47558] = anon_sym_LBRACE;
	v->a[47559] = anon_sym_BANG;
	small_parse_table_2378(v);
}

void	small_parse_table_2378(t_small_parse_table_array *v)
{
	v->a[47560] = anon_sym_LT;
	v->a[47561] = anon_sym_GT;
	v->a[47562] = anon_sym_GT_GT;
	v->a[47563] = anon_sym_LT_AMP;
	v->a[47564] = anon_sym_GT_AMP;
	v->a[47565] = anon_sym_GT_PIPE;
	v->a[47566] = anon_sym_LT_AMP_DASH;
	v->a[47567] = anon_sym_GT_AMP_DASH;
	v->a[47568] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47569] = anon_sym_DOLLAR;
	v->a[47570] = anon_sym_DQUOTE;
	v->a[47571] = sym_raw_string;
	v->a[47572] = sym_number;
	v->a[47573] = anon_sym_DOLLAR_LBRACE;
	v->a[47574] = anon_sym_DOLLAR_LPAREN;
	v->a[47575] = anon_sym_BQUOTE;
	v->a[47576] = sym_word;
	v->a[47577] = 4;
	v->a[47578] = actions(3);
	v->a[47579] = 1;
	small_parse_table_2379(v);
}

void	small_parse_table_2379(t_small_parse_table_array *v)
{
	v->a[47580] = sym_comment;
	v->a[47581] = actions(1575);
	v->a[47582] = 2;
	v->a[47583] = anon_sym_RPAREN;
	v->a[47584] = anon_sym_SEMI_SEMI;
	v->a[47585] = actions(1577);
	v->a[47586] = 2;
	v->a[47587] = sym_file_descriptor;
	v->a[47588] = sym_variable_name;
	v->a[47589] = actions(1573);
	v->a[47590] = 25;
	v->a[47591] = anon_sym_for;
	v->a[47592] = anon_sym_while;
	v->a[47593] = anon_sym_until;
	v->a[47594] = anon_sym_if;
	v->a[47595] = anon_sym_case;
	v->a[47596] = anon_sym_LPAREN;
	v->a[47597] = anon_sym_LBRACE;
	v->a[47598] = anon_sym_BANG;
	v->a[47599] = anon_sym_LT;
	small_parse_table_2380(v);
}

/* EOF small_parse_table_475.c */
