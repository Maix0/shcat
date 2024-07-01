/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_450.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2250(t_small_parse_table_array *v)
{
	v->a[45000] = aux_sym_heredoc_redirect_token1;
	v->a[45001] = anon_sym_AMP;
	v->a[45002] = anon_sym_SEMI;
	v->a[45003] = 7;
	v->a[45004] = actions(3);
	v->a[45005] = 1;
	v->a[45006] = sym_comment;
	v->a[45007] = actions(1530);
	v->a[45008] = 1;
	v->a[45009] = sym_file_descriptor;
	v->a[45010] = actions(1533);
	v->a[45011] = 1;
	v->a[45012] = sym_variable_name;
	v->a[45013] = actions(1570);
	v->a[45014] = 1;
	v->a[45015] = anon_sym_RPAREN;
	v->a[45016] = actions(1527);
	v->a[45017] = 8;
	v->a[45018] = anon_sym_LT;
	v->a[45019] = anon_sym_GT;
	small_parse_table_2251(v);
}

void	small_parse_table_2251(t_small_parse_table_array *v)
{
	v->a[45020] = anon_sym_GT_GT;
	v->a[45021] = anon_sym_LT_AMP;
	v->a[45022] = anon_sym_GT_AMP;
	v->a[45023] = anon_sym_GT_PIPE;
	v->a[45024] = anon_sym_LT_AMP_DASH;
	v->a[45025] = anon_sym_GT_AMP_DASH;
	v->a[45026] = actions(1520);
	v->a[45027] = 9;
	v->a[45028] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45029] = anon_sym_DOLLAR;
	v->a[45030] = anon_sym_DQUOTE;
	v->a[45031] = sym_raw_string;
	v->a[45032] = sym_number;
	v->a[45033] = anon_sym_DOLLAR_LBRACE;
	v->a[45034] = anon_sym_DOLLAR_LPAREN;
	v->a[45035] = anon_sym_BQUOTE;
	v->a[45036] = sym_word;
	v->a[45037] = actions(1522);
	v->a[45038] = 9;
	v->a[45039] = anon_sym_PIPE;
	small_parse_table_2252(v);
}

void	small_parse_table_2252(t_small_parse_table_array *v)
{
	v->a[45040] = anon_sym_SEMI_SEMI;
	v->a[45041] = anon_sym_AMP_AMP;
	v->a[45042] = anon_sym_PIPE_PIPE;
	v->a[45043] = anon_sym_LT_LT;
	v->a[45044] = anon_sym_LT_LT_DASH;
	v->a[45045] = aux_sym_heredoc_redirect_token1;
	v->a[45046] = anon_sym_AMP;
	v->a[45047] = anon_sym_SEMI;
	v->a[45048] = 4;
	v->a[45049] = actions(3);
	v->a[45050] = 1;
	v->a[45051] = sym_comment;
	v->a[45052] = actions(1575);
	v->a[45053] = 2;
	v->a[45054] = anon_sym_esac;
	v->a[45055] = anon_sym_SEMI_SEMI;
	v->a[45056] = actions(1577);
	v->a[45057] = 2;
	v->a[45058] = sym_file_descriptor;
	v->a[45059] = sym_variable_name;
	small_parse_table_2253(v);
}

void	small_parse_table_2253(t_small_parse_table_array *v)
{
	v->a[45060] = actions(1573);
	v->a[45061] = 25;
	v->a[45062] = anon_sym_for;
	v->a[45063] = anon_sym_while;
	v->a[45064] = anon_sym_until;
	v->a[45065] = anon_sym_if;
	v->a[45066] = anon_sym_case;
	v->a[45067] = anon_sym_LPAREN;
	v->a[45068] = anon_sym_LBRACE;
	v->a[45069] = anon_sym_BANG;
	v->a[45070] = anon_sym_LT;
	v->a[45071] = anon_sym_GT;
	v->a[45072] = anon_sym_GT_GT;
	v->a[45073] = anon_sym_LT_AMP;
	v->a[45074] = anon_sym_GT_AMP;
	v->a[45075] = anon_sym_GT_PIPE;
	v->a[45076] = anon_sym_LT_AMP_DASH;
	v->a[45077] = anon_sym_GT_AMP_DASH;
	v->a[45078] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45079] = anon_sym_DOLLAR;
	small_parse_table_2254(v);
}

void	small_parse_table_2254(t_small_parse_table_array *v)
{
	v->a[45080] = anon_sym_DQUOTE;
	v->a[45081] = sym_raw_string;
	v->a[45082] = sym_number;
	v->a[45083] = anon_sym_DOLLAR_LBRACE;
	v->a[45084] = anon_sym_DOLLAR_LPAREN;
	v->a[45085] = anon_sym_BQUOTE;
	v->a[45086] = sym_word;
	v->a[45087] = 4;
	v->a[45088] = actions(3);
	v->a[45089] = 1;
	v->a[45090] = sym_comment;
	v->a[45091] = actions(1575);
	v->a[45092] = 2;
	v->a[45093] = anon_sym_esac;
	v->a[45094] = anon_sym_SEMI_SEMI;
	v->a[45095] = actions(1577);
	v->a[45096] = 2;
	v->a[45097] = sym_file_descriptor;
	v->a[45098] = sym_variable_name;
	v->a[45099] = actions(1573);
	small_parse_table_2255(v);
}

/* EOF small_parse_table_450.c */
