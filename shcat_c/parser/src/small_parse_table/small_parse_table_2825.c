/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2825.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14125(t_small_parse_table_array *v)
{
	v->a[282500] = actions(12716);
	v->a[282501] = 15;
	v->a[282502] = sym_test_operator;
	v->a[282503] = sym_extglob_pattern;
	v->a[282504] = sym__brace_start;
	v->a[282505] = anon_sym_LPAREN_LPAREN;
	v->a[282506] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[282507] = anon_sym_DOLLAR_LBRACK;
	v->a[282508] = sym__special_character;
	v->a[282509] = anon_sym_DQUOTE;
	v->a[282510] = sym_raw_string;
	v->a[282511] = sym_ansi_c_string;
	v->a[282512] = anon_sym_DOLLAR_LBRACE;
	v->a[282513] = anon_sym_BQUOTE;
	v->a[282514] = anon_sym_DOLLAR_BQUOTE;
	v->a[282515] = anon_sym_LT_LPAREN;
	v->a[282516] = anon_sym_GT_LPAREN;
	v->a[282517] = 3;
	v->a[282518] = actions(71);
	v->a[282519] = 1;
	small_parse_table_14126(v);
}

void	small_parse_table_14126(t_small_parse_table_array *v)
{
	v->a[282520] = sym_comment;
	v->a[282521] = actions(12714);
	v->a[282522] = 6;
	v->a[282523] = anon_sym_LPAREN;
	v->a[282524] = anon_sym_DOLLAR;
	v->a[282525] = aux_sym_number_token1;
	v->a[282526] = aux_sym_number_token2;
	v->a[282527] = anon_sym_DOLLAR_LPAREN;
	v->a[282528] = sym_word;
	v->a[282529] = actions(12716);
	v->a[282530] = 15;
	v->a[282531] = sym_test_operator;
	v->a[282532] = sym_extglob_pattern;
	v->a[282533] = sym__brace_start;
	v->a[282534] = anon_sym_LPAREN_LPAREN;
	v->a[282535] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[282536] = anon_sym_DOLLAR_LBRACK;
	v->a[282537] = sym__special_character;
	v->a[282538] = anon_sym_DQUOTE;
	v->a[282539] = sym_raw_string;
	small_parse_table_14127(v);
}

void	small_parse_table_14127(t_small_parse_table_array *v)
{
	v->a[282540] = sym_ansi_c_string;
	v->a[282541] = anon_sym_DOLLAR_LBRACE;
	v->a[282542] = anon_sym_BQUOTE;
	v->a[282543] = anon_sym_DOLLAR_BQUOTE;
	v->a[282544] = anon_sym_LT_LPAREN;
	v->a[282545] = anon_sym_GT_LPAREN;
	v->a[282546] = 12;
	v->a[282547] = actions(71);
	v->a[282548] = 1;
	v->a[282549] = sym_comment;
	v->a[282550] = actions(4253);
	v->a[282551] = 1;
	v->a[282552] = anon_sym_PIPE;
	v->a[282553] = actions(4348);
	v->a[282554] = 1;
	v->a[282555] = anon_sym_PIPE_AMP;
	v->a[282556] = actions(5994);
	v->a[282557] = 1;
	v->a[282558] = anon_sym_LT_LT;
	v->a[282559] = actions(5996);
	small_parse_table_14128(v);
}

void	small_parse_table_14128(t_small_parse_table_array *v)
{
	v->a[282560] = 1;
	v->a[282561] = anon_sym_LT_LT_DASH;
	v->a[282562] = actions(7463);
	v->a[282563] = 1;
	v->a[282564] = anon_sym_RBRACK;
	v->a[282565] = actions(12686);
	v->a[282566] = 1;
	v->a[282567] = sym_file_descriptor;
	v->a[282568] = actions(5992);
	v->a[282569] = 2;
	v->a[282570] = anon_sym_PIPE_PIPE;
	v->a[282571] = anon_sym_AMP_AMP;
	v->a[282572] = actions(12502);
	v->a[282573] = 2;
	v->a[282574] = anon_sym_LT_AMP_DASH;
	v->a[282575] = anon_sym_GT_AMP_DASH;
	v->a[282576] = actions(12500);
	v->a[282577] = 3;
	v->a[282578] = anon_sym_GT_GT;
	v->a[282579] = anon_sym_AMP_GT_GT;
	small_parse_table_14129(v);
}

void	small_parse_table_14129(t_small_parse_table_array *v)
{
	v->a[282580] = anon_sym_GT_PIPE;
	v->a[282581] = state(5350);
	v->a[282582] = 3;
	v->a[282583] = sym_file_redirect;
	v->a[282584] = sym_heredoc_redirect;
	v->a[282585] = aux_sym_redirected_statement_repeat1;
	v->a[282586] = actions(12498);
	v->a[282587] = 5;
	v->a[282588] = anon_sym_LT;
	v->a[282589] = anon_sym_GT;
	v->a[282590] = anon_sym_AMP_GT;
	v->a[282591] = anon_sym_LT_AMP;
	v->a[282592] = anon_sym_GT_AMP;
	v->a[282593] = 3;
	v->a[282594] = actions(71);
	v->a[282595] = 1;
	v->a[282596] = sym_comment;
	v->a[282597] = actions(12718);
	v->a[282598] = 6;
	v->a[282599] = anon_sym_LPAREN;
	small_parse_table_14130(v);
}

/* EOF small_parse_table_2825.c */
