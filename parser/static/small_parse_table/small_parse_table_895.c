/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_895.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4475(t_small_parse_table_array *v)
{
	v->a[89500] = 2;
	v->a[89501] = anon_sym_GT_GT;
	v->a[89502] = anon_sym_GT_PIPE;
	v->a[89503] = actions(3841);
	v->a[89504] = 2;
	v->a[89505] = anon_sym_LT_AMP_DASH;
	v->a[89506] = anon_sym_GT_AMP_DASH;
	v->a[89507] = actions(3837);
	v->a[89508] = 4;
	v->a[89509] = anon_sym_LT;
	v->a[89510] = anon_sym_GT;
	v->a[89511] = anon_sym_LT_AMP;
	v->a[89512] = anon_sym_GT_AMP;
	v->a[89513] = 6;
	v->a[89514] = actions(870);
	v->a[89515] = 1;
	v->a[89516] = sym_comment;
	v->a[89517] = actions(3793);
	v->a[89518] = 1;
	v->a[89519] = anon_sym_LT_LT;
	small_parse_table_4476(v);
}

void	small_parse_table_4476(t_small_parse_table_array *v)
{
	v->a[89520] = actions(3795);
	v->a[89521] = 1;
	v->a[89522] = anon_sym_LT_LT_DASH;
	v->a[89523] = actions(3849);
	v->a[89524] = 2;
	v->a[89525] = anon_sym_GT_GT;
	v->a[89526] = anon_sym_GT_PIPE;
	v->a[89527] = actions(3851);
	v->a[89528] = 2;
	v->a[89529] = anon_sym_LT_AMP_DASH;
	v->a[89530] = anon_sym_GT_AMP_DASH;
	v->a[89531] = actions(3847);
	v->a[89532] = 4;
	v->a[89533] = anon_sym_LT;
	v->a[89534] = anon_sym_GT;
	v->a[89535] = anon_sym_LT_AMP;
	v->a[89536] = anon_sym_GT_AMP;
	v->a[89537] = 2;
	v->a[89538] = actions(3);
	v->a[89539] = 1;
	small_parse_table_4477(v);
}

void	small_parse_table_4477(t_small_parse_table_array *v)
{
	v->a[89540] = sym_comment;
	v->a[89541] = actions(3352);
	v->a[89542] = 10;
	v->a[89543] = aux_sym_heredoc_redirect_token1;
	v->a[89544] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89545] = anon_sym_DOLLAR;
	v->a[89546] = anon_sym_DQUOTE;
	v->a[89547] = sym_raw_string;
	v->a[89548] = sym_number;
	v->a[89549] = anon_sym_DOLLAR_LBRACE;
	v->a[89550] = anon_sym_DOLLAR_LPAREN;
	v->a[89551] = anon_sym_BQUOTE;
	v->a[89552] = sym_word;
	v->a[89553] = 8;
	v->a[89554] = actions(870);
	v->a[89555] = 1;
	v->a[89556] = sym_comment;
	v->a[89557] = actions(3803);
	v->a[89558] = 1;
	v->a[89559] = anon_sym_DOLLAR;
	small_parse_table_4478(v);
}

void	small_parse_table_4478(t_small_parse_table_array *v)
{
	v->a[89560] = actions(3805);
	v->a[89561] = 1;
	v->a[89562] = anon_sym_DOLLAR_LBRACE;
	v->a[89563] = actions(3807);
	v->a[89564] = 1;
	v->a[89565] = anon_sym_DOLLAR_LPAREN;
	v->a[89566] = actions(3809);
	v->a[89567] = 1;
	v->a[89568] = anon_sym_BQUOTE;
	v->a[89569] = actions(3853);
	v->a[89570] = 1;
	v->a[89571] = sym_heredoc_content;
	v->a[89572] = actions(3855);
	v->a[89573] = 1;
	v->a[89574] = sym_heredoc_end;
	v->a[89575] = state(1928);
	v->a[89576] = 4;
	v->a[89577] = sym_simple_expansion;
	v->a[89578] = sym_expansion;
	v->a[89579] = sym_command_substitution;
	small_parse_table_4479(v);
}

void	small_parse_table_4479(t_small_parse_table_array *v)
{
	v->a[89580] = aux_sym_heredoc_body_repeat1;
	v->a[89581] = 8;
	v->a[89582] = actions(3);
	v->a[89583] = 1;
	v->a[89584] = sym_comment;
	v->a[89585] = actions(3857);
	v->a[89586] = 1;
	v->a[89587] = anon_sym_in;
	v->a[89588] = actions(3859);
	v->a[89589] = 1;
	v->a[89590] = aux_sym_heredoc_redirect_token1;
	v->a[89591] = actions(3861);
	v->a[89592] = 1;
	v->a[89593] = aux_sym_concatenation_token1;
	v->a[89594] = actions(3863);
	v->a[89595] = 1;
	v->a[89596] = sym__concat;
	v->a[89597] = state(1967);
	v->a[89598] = 1;
	v->a[89599] = aux_sym_concatenation_repeat1;
	small_parse_table_4480(v);
}

/* EOF small_parse_table_895.c */
