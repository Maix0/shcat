/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_885.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4425(t_small_parse_table_array *v)
{
	v->a[88500] = anon_sym_BQUOTE;
	v->a[88501] = state(203);
	v->a[88502] = 2;
	v->a[88503] = sym_concatenation;
	v->a[88504] = aux_sym_for_statement_repeat1;
	v->a[88505] = actions(3575);
	v->a[88506] = 3;
	v->a[88507] = sym_raw_string;
	v->a[88508] = sym_number;
	v->a[88509] = sym_word;
	v->a[88510] = state(368);
	v->a[88511] = 5;
	v->a[88512] = sym_arithmetic_expansion;
	v->a[88513] = sym_string;
	v->a[88514] = sym_simple_expansion;
	v->a[88515] = sym_expansion;
	v->a[88516] = sym_command_substitution;
	v->a[88517] = 5;
	v->a[88518] = actions(3);
	v->a[88519] = 1;
	small_parse_table_4426(v);
}

void	small_parse_table_4426(t_small_parse_table_array *v)
{
	v->a[88520] = sym_comment;
	v->a[88521] = actions(3586);
	v->a[88522] = 1;
	v->a[88523] = aux_sym_concatenation_token1;
	v->a[88524] = actions(3588);
	v->a[88525] = 1;
	v->a[88526] = sym__concat;
	v->a[88527] = state(1748);
	v->a[88528] = 1;
	v->a[88529] = aux_sym_concatenation_repeat1;
	v->a[88530] = actions(974);
	v->a[88531] = 13;
	v->a[88532] = anon_sym_SEMI_SEMI;
	v->a[88533] = aux_sym_heredoc_redirect_token1;
	v->a[88534] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88535] = anon_sym_AMP;
	v->a[88536] = anon_sym_DOLLAR;
	v->a[88537] = anon_sym_DQUOTE;
	v->a[88538] = sym_raw_string;
	v->a[88539] = sym_number;
	small_parse_table_4427(v);
}

void	small_parse_table_4427(t_small_parse_table_array *v)
{
	v->a[88540] = anon_sym_DOLLAR_LBRACE;
	v->a[88541] = anon_sym_DOLLAR_LPAREN;
	v->a[88542] = anon_sym_BQUOTE;
	v->a[88543] = sym_word;
	v->a[88544] = anon_sym_SEMI;
	v->a[88545] = 5;
	v->a[88546] = actions(3);
	v->a[88547] = 1;
	v->a[88548] = sym_comment;
	v->a[88549] = actions(3586);
	v->a[88550] = 1;
	v->a[88551] = aux_sym_concatenation_token1;
	v->a[88552] = actions(3590);
	v->a[88553] = 1;
	v->a[88554] = sym__concat;
	v->a[88555] = state(1744);
	v->a[88556] = 1;
	v->a[88557] = aux_sym_concatenation_repeat1;
	v->a[88558] = actions(1215);
	v->a[88559] = 13;
	small_parse_table_4428(v);
}

void	small_parse_table_4428(t_small_parse_table_array *v)
{
	v->a[88560] = anon_sym_SEMI_SEMI;
	v->a[88561] = aux_sym_heredoc_redirect_token1;
	v->a[88562] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88563] = anon_sym_AMP;
	v->a[88564] = anon_sym_DOLLAR;
	v->a[88565] = anon_sym_DQUOTE;
	v->a[88566] = sym_raw_string;
	v->a[88567] = sym_number;
	v->a[88568] = anon_sym_DOLLAR_LBRACE;
	v->a[88569] = anon_sym_DOLLAR_LPAREN;
	v->a[88570] = anon_sym_BQUOTE;
	v->a[88571] = sym_word;
	v->a[88572] = anon_sym_SEMI;
	v->a[88573] = 3;
	v->a[88574] = actions(1094);
	v->a[88575] = 1;
	v->a[88576] = sym_comment;
	v->a[88577] = actions(2624);
	v->a[88578] = 7;
	v->a[88579] = anon_sym_PIPE;
	small_parse_table_4429(v);
}

void	small_parse_table_4429(t_small_parse_table_array *v)
{
	v->a[88580] = anon_sym_LT;
	v->a[88581] = anon_sym_GT;
	v->a[88582] = anon_sym_AMP_GT;
	v->a[88583] = anon_sym_LT_AMP;
	v->a[88584] = anon_sym_GT_AMP;
	v->a[88585] = anon_sym_LT_LT;
	v->a[88586] = actions(2626);
	v->a[88587] = 9;
	v->a[88588] = sym_file_descriptor;
	v->a[88589] = anon_sym_AMP_AMP;
	v->a[88590] = anon_sym_PIPE_PIPE;
	v->a[88591] = anon_sym_GT_GT;
	v->a[88592] = anon_sym_AMP_GT_GT;
	v->a[88593] = anon_sym_GT_PIPE;
	v->a[88594] = anon_sym_LT_AMP_DASH;
	v->a[88595] = anon_sym_GT_AMP_DASH;
	v->a[88596] = anon_sym_LT_LT_DASH;
	v->a[88597] = 10;
	v->a[88598] = actions(3);
	v->a[88599] = 1;
	small_parse_table_4430(v);
}

/* EOF small_parse_table_885.c */
