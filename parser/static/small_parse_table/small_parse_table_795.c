/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_795.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3975(t_small_parse_table_array *v)
{
	v->a[79500] = aux_sym_heredoc_body_repeat1;
	v->a[79501] = 8;
	v->a[79502] = actions(680);
	v->a[79503] = 1;
	v->a[79504] = sym_comment;
	v->a[79505] = actions(3444);
	v->a[79506] = 1;
	v->a[79507] = anon_sym_DOLLAR;
	v->a[79508] = actions(3447);
	v->a[79509] = 1;
	v->a[79510] = anon_sym_DOLLAR_LBRACE;
	v->a[79511] = actions(3450);
	v->a[79512] = 1;
	v->a[79513] = anon_sym_DOLLAR_LPAREN;
	v->a[79514] = actions(3453);
	v->a[79515] = 1;
	v->a[79516] = anon_sym_BQUOTE;
	v->a[79517] = actions(3456);
	v->a[79518] = 1;
	v->a[79519] = sym_heredoc_content;
	small_parse_table_3976(v);
}

void	small_parse_table_3976(t_small_parse_table_array *v)
{
	v->a[79520] = actions(3459);
	v->a[79521] = 1;
	v->a[79522] = sym_heredoc_end;
	v->a[79523] = state(1724);
	v->a[79524] = 4;
	v->a[79525] = sym_simple_expansion;
	v->a[79526] = sym_expansion;
	v->a[79527] = sym_command_substitution;
	v->a[79528] = aux_sym_heredoc_body_repeat1;
	v->a[79529] = 2;
	v->a[79530] = actions(3);
	v->a[79531] = 1;
	v->a[79532] = sym_comment;
	v->a[79533] = actions(3058);
	v->a[79534] = 10;
	v->a[79535] = aux_sym_heredoc_redirect_token1;
	v->a[79536] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79537] = anon_sym_DOLLAR;
	v->a[79538] = anon_sym_DQUOTE;
	v->a[79539] = sym_raw_string;
	small_parse_table_3977(v);
}

void	small_parse_table_3977(t_small_parse_table_array *v)
{
	v->a[79540] = sym_number;
	v->a[79541] = anon_sym_DOLLAR_LBRACE;
	v->a[79542] = anon_sym_DOLLAR_LPAREN;
	v->a[79543] = anon_sym_BQUOTE;
	v->a[79544] = sym_word;
	v->a[79545] = 5;
	v->a[79546] = actions(680);
	v->a[79547] = 1;
	v->a[79548] = sym_comment;
	v->a[79549] = actions(3465);
	v->a[79550] = 1;
	v->a[79551] = anon_sym_LT_LT;
	v->a[79552] = actions(3467);
	v->a[79553] = 1;
	v->a[79554] = anon_sym_LT_LT_DASH;
	v->a[79555] = actions(3461);
	v->a[79556] = 2;
	v->a[79557] = anon_sym_LT;
	v->a[79558] = anon_sym_GT;
	v->a[79559] = actions(3463);
	small_parse_table_3978(v);
}

void	small_parse_table_3978(t_small_parse_table_array *v)
{
	v->a[79560] = 5;
	v->a[79561] = anon_sym_GT_GT;
	v->a[79562] = anon_sym_LT_AMP;
	v->a[79563] = anon_sym_GT_AMP;
	v->a[79564] = anon_sym_GT_PIPE;
	v->a[79565] = anon_sym_LT_GT;
	v->a[79566] = 8;
	v->a[79567] = actions(3);
	v->a[79568] = 1;
	v->a[79569] = sym_comment;
	v->a[79570] = actions(3469);
	v->a[79571] = 1;
	v->a[79572] = anon_sym_in;
	v->a[79573] = actions(3471);
	v->a[79574] = 1;
	v->a[79575] = aux_sym_heredoc_redirect_token1;
	v->a[79576] = actions(3473);
	v->a[79577] = 1;
	v->a[79578] = aux_sym_concatenation_token1;
	v->a[79579] = actions(3475);
	small_parse_table_3979(v);
}

void	small_parse_table_3979(t_small_parse_table_array *v)
{
	v->a[79580] = 1;
	v->a[79581] = sym__concat;
	v->a[79582] = state(1745);
	v->a[79583] = 1;
	v->a[79584] = aux_sym_concatenation_repeat1;
	v->a[79585] = state(2024);
	v->a[79586] = 1;
	v->a[79587] = sym_terminator;
	v->a[79588] = actions(1966);
	v->a[79589] = 3;
	v->a[79590] = anon_sym_SEMI_SEMI;
	v->a[79591] = anon_sym_AMP;
	v->a[79592] = anon_sym_SEMI;
	v->a[79593] = 5;
	v->a[79594] = actions(680);
	v->a[79595] = 1;
	v->a[79596] = sym_comment;
	v->a[79597] = actions(3465);
	v->a[79598] = 1;
	v->a[79599] = anon_sym_LT_LT;
	small_parse_table_3980(v);
}

/* EOF small_parse_table_795.c */
