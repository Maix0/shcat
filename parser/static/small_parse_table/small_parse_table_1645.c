/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1645.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8225(t_small_parse_table_array *v)
{
	v->a[164500] = aux_sym_number_token1;
	v->a[164501] = aux_sym_number_token2;
	v->a[164502] = anon_sym_DOLLAR_LBRACE;
	v->a[164503] = anon_sym_DOLLAR_LPAREN;
	v->a[164504] = anon_sym_BQUOTE;
	v->a[164505] = anon_sym_DOLLAR_BQUOTE;
	v->a[164506] = anon_sym_LT_LPAREN;
	v->a[164507] = anon_sym_GT_LPAREN;
	v->a[164508] = sym_word;
	v->a[164509] = 6;
	v->a[164510] = actions(3);
	v->a[164511] = 1;
	v->a[164512] = sym_comment;
	v->a[164513] = actions(7475);
	v->a[164514] = 1;
	v->a[164515] = aux_sym_concatenation_token1;
	v->a[164516] = actions(7477);
	v->a[164517] = 1;
	v->a[164518] = sym__concat;
	v->a[164519] = state(3117);
	small_parse_table_8226(v);
}

void	small_parse_table_8226(t_small_parse_table_array *v)
{
	v->a[164520] = 1;
	v->a[164521] = aux_sym_concatenation_repeat1;
	v->a[164522] = actions(5391);
	v->a[164523] = 4;
	v->a[164524] = sym_file_descriptor;
	v->a[164525] = sym_test_operator;
	v->a[164526] = sym__brace_start;
	v->a[164527] = aux_sym_heredoc_redirect_token1;
	v->a[164528] = actions(5389);
	v->a[164529] = 30;
	v->a[164530] = anon_sym_LPAREN_LPAREN;
	v->a[164531] = anon_sym_PIPE_PIPE;
	v->a[164532] = anon_sym_AMP_AMP;
	v->a[164533] = anon_sym_LT;
	v->a[164534] = anon_sym_GT;
	v->a[164535] = anon_sym_GT_GT;
	v->a[164536] = anon_sym_AMP_GT;
	v->a[164537] = anon_sym_AMP_GT_GT;
	v->a[164538] = anon_sym_LT_AMP;
	v->a[164539] = anon_sym_GT_AMP;
	small_parse_table_8227(v);
}

void	small_parse_table_8227(t_small_parse_table_array *v)
{
	v->a[164540] = anon_sym_GT_PIPE;
	v->a[164541] = anon_sym_LT_AMP_DASH;
	v->a[164542] = anon_sym_GT_AMP_DASH;
	v->a[164543] = anon_sym_LT_LT_LT;
	v->a[164544] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[164545] = anon_sym_DOLLAR_LBRACK;
	v->a[164546] = anon_sym_DOLLAR;
	v->a[164547] = sym__special_character;
	v->a[164548] = anon_sym_DQUOTE;
	v->a[164549] = sym_raw_string;
	v->a[164550] = sym_ansi_c_string;
	v->a[164551] = aux_sym_number_token1;
	v->a[164552] = aux_sym_number_token2;
	v->a[164553] = anon_sym_DOLLAR_LBRACE;
	v->a[164554] = anon_sym_DOLLAR_LPAREN;
	v->a[164555] = anon_sym_BQUOTE;
	v->a[164556] = anon_sym_DOLLAR_BQUOTE;
	v->a[164557] = anon_sym_LT_LPAREN;
	v->a[164558] = anon_sym_GT_LPAREN;
	v->a[164559] = sym_word;
	small_parse_table_8228(v);
}

void	small_parse_table_8228(t_small_parse_table_array *v)
{
	v->a[164560] = 19;
	v->a[164561] = actions(71);
	v->a[164562] = 1;
	v->a[164563] = sym_comment;
	v->a[164564] = actions(7402);
	v->a[164565] = 1;
	v->a[164566] = anon_sym_EQ;
	v->a[164567] = actions(7408);
	v->a[164568] = 1;
	v->a[164569] = anon_sym_PIPE_PIPE;
	v->a[164570] = actions(7410);
	v->a[164571] = 1;
	v->a[164572] = anon_sym_AMP_AMP;
	v->a[164573] = actions(7412);
	v->a[164574] = 1;
	v->a[164575] = anon_sym_PIPE;
	v->a[164576] = actions(7414);
	v->a[164577] = 1;
	v->a[164578] = anon_sym_CARET;
	v->a[164579] = actions(7416);
	small_parse_table_8229(v);
}

void	small_parse_table_8229(t_small_parse_table_array *v)
{
	v->a[164580] = 1;
	v->a[164581] = anon_sym_AMP;
	v->a[164582] = actions(7430);
	v->a[164583] = 1;
	v->a[164584] = anon_sym_STAR_STAR;
	v->a[164585] = actions(7434);
	v->a[164586] = 1;
	v->a[164587] = anon_sym_EQ_TILDE;
	v->a[164588] = actions(7436);
	v->a[164589] = 1;
	v->a[164590] = anon_sym_QMARK;
	v->a[164591] = actions(7438);
	v->a[164592] = 1;
	v->a[164593] = sym_test_operator;
	v->a[164594] = actions(7404);
	v->a[164595] = 2;
	v->a[164596] = anon_sym_PLUS_PLUS;
	v->a[164597] = anon_sym_DASH_DASH;
	v->a[164598] = actions(7418);
	v->a[164599] = 2;
	small_parse_table_8230(v);
}

/* EOF small_parse_table_1645.c */
