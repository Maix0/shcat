/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_705.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3525(t_small_parse_table_array *v)
{
	v->a[70500] = 3;
	v->a[70501] = actions(3);
	v->a[70502] = 1;
	v->a[70503] = sym_comment;
	v->a[70504] = actions(1100);
	v->a[70505] = 3;
	v->a[70506] = sym_file_descriptor;
	v->a[70507] = sym__concat;
	v->a[70508] = sym_variable_name;
	v->a[70509] = actions(1098);
	v->a[70510] = 20;
	v->a[70511] = anon_sym_LT;
	v->a[70512] = anon_sym_GT;
	v->a[70513] = anon_sym_GT_GT;
	v->a[70514] = anon_sym_AMP_GT;
	v->a[70515] = anon_sym_AMP_GT_GT;
	v->a[70516] = anon_sym_LT_AMP;
	v->a[70517] = anon_sym_GT_AMP;
	v->a[70518] = anon_sym_GT_PIPE;
	v->a[70519] = anon_sym_LT_AMP_DASH;
	small_parse_table_3526(v);
}

void	small_parse_table_3526(t_small_parse_table_array *v)
{
	v->a[70520] = anon_sym_GT_AMP_DASH;
	v->a[70521] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70522] = aux_sym_concatenation_token1;
	v->a[70523] = anon_sym_DOLLAR;
	v->a[70524] = anon_sym_DQUOTE;
	v->a[70525] = sym_raw_string;
	v->a[70526] = sym_number;
	v->a[70527] = anon_sym_DOLLAR_LBRACE;
	v->a[70528] = anon_sym_DOLLAR_LPAREN;
	v->a[70529] = anon_sym_BQUOTE;
	v->a[70530] = sym_word;
	v->a[70531] = 7;
	v->a[70532] = actions(3);
	v->a[70533] = 1;
	v->a[70534] = sym_comment;
	v->a[70535] = actions(2293);
	v->a[70536] = 1;
	v->a[70537] = sym_file_descriptor;
	v->a[70538] = actions(2352);
	v->a[70539] = 1;
	small_parse_table_3527(v);
}

void	small_parse_table_3527(t_small_parse_table_array *v)
{
	v->a[70540] = aux_sym_heredoc_redirect_token1;
	v->a[70541] = actions(2001);
	v->a[70542] = 2;
	v->a[70543] = anon_sym_LT_AMP_DASH;
	v->a[70544] = anon_sym_GT_AMP_DASH;
	v->a[70545] = state(1195);
	v->a[70546] = 2;
	v->a[70547] = sym_file_redirect;
	v->a[70548] = aux_sym_redirected_statement_repeat2;
	v->a[70549] = actions(1999);
	v->a[70550] = 8;
	v->a[70551] = anon_sym_LT;
	v->a[70552] = anon_sym_GT;
	v->a[70553] = anon_sym_GT_GT;
	v->a[70554] = anon_sym_AMP_GT;
	v->a[70555] = anon_sym_AMP_GT_GT;
	v->a[70556] = anon_sym_LT_AMP;
	v->a[70557] = anon_sym_GT_AMP;
	v->a[70558] = anon_sym_GT_PIPE;
	v->a[70559] = actions(2350);
	small_parse_table_3528(v);
}

void	small_parse_table_3528(t_small_parse_table_array *v)
{
	v->a[70560] = 9;
	v->a[70561] = anon_sym_esac;
	v->a[70562] = anon_sym_PIPE;
	v->a[70563] = anon_sym_SEMI_SEMI;
	v->a[70564] = anon_sym_AMP_AMP;
	v->a[70565] = anon_sym_PIPE_PIPE;
	v->a[70566] = anon_sym_LT_LT;
	v->a[70567] = anon_sym_LT_LT_DASH;
	v->a[70568] = anon_sym_AMP;
	v->a[70569] = anon_sym_SEMI;
	v->a[70570] = 3;
	v->a[70571] = actions(3);
	v->a[70572] = 1;
	v->a[70573] = sym_comment;
	v->a[70574] = actions(1056);
	v->a[70575] = 3;
	v->a[70576] = sym_file_descriptor;
	v->a[70577] = sym__concat;
	v->a[70578] = aux_sym_heredoc_redirect_token1;
	v->a[70579] = actions(1058);
	small_parse_table_3529(v);
}

void	small_parse_table_3529(t_small_parse_table_array *v)
{
	v->a[70580] = 20;
	v->a[70581] = anon_sym_esac;
	v->a[70582] = anon_sym_PIPE;
	v->a[70583] = anon_sym_SEMI_SEMI;
	v->a[70584] = anon_sym_AMP_AMP;
	v->a[70585] = anon_sym_PIPE_PIPE;
	v->a[70586] = anon_sym_LT;
	v->a[70587] = anon_sym_GT;
	v->a[70588] = anon_sym_GT_GT;
	v->a[70589] = anon_sym_AMP_GT;
	v->a[70590] = anon_sym_AMP_GT_GT;
	v->a[70591] = anon_sym_LT_AMP;
	v->a[70592] = anon_sym_GT_AMP;
	v->a[70593] = anon_sym_GT_PIPE;
	v->a[70594] = anon_sym_LT_AMP_DASH;
	v->a[70595] = anon_sym_GT_AMP_DASH;
	v->a[70596] = anon_sym_LT_LT;
	v->a[70597] = anon_sym_LT_LT_DASH;
	v->a[70598] = anon_sym_AMP;
	v->a[70599] = aux_sym_concatenation_token1;
	small_parse_table_3530(v);
}

/* EOF small_parse_table_705.c */
