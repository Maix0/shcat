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
	v->a[89500] = sym_file_descriptor;
	v->a[89501] = anon_sym_AMP_AMP;
	v->a[89502] = anon_sym_PIPE_PIPE;
	v->a[89503] = anon_sym_GT_GT;
	v->a[89504] = anon_sym_AMP_GT_GT;
	v->a[89505] = anon_sym_GT_PIPE;
	v->a[89506] = anon_sym_LT_AMP_DASH;
	v->a[89507] = anon_sym_GT_AMP_DASH;
	v->a[89508] = anon_sym_LT_LT_DASH;
	v->a[89509] = 3;
	v->a[89510] = actions(3);
	v->a[89511] = 1;
	v->a[89512] = sym_comment;
	v->a[89513] = actions(1159);
	v->a[89514] = 3;
	v->a[89515] = sym_file_descriptor;
	v->a[89516] = sym__concat;
	v->a[89517] = aux_sym_heredoc_redirect_token1;
	v->a[89518] = actions(1157);
	v->a[89519] = 13;
	small_parse_table_4476(v);
}

void	small_parse_table_4476(t_small_parse_table_array *v)
{
	v->a[89520] = anon_sym_AMP_AMP;
	v->a[89521] = anon_sym_PIPE_PIPE;
	v->a[89522] = anon_sym_LT;
	v->a[89523] = anon_sym_GT;
	v->a[89524] = anon_sym_GT_GT;
	v->a[89525] = anon_sym_AMP_GT;
	v->a[89526] = anon_sym_AMP_GT_GT;
	v->a[89527] = anon_sym_LT_AMP;
	v->a[89528] = anon_sym_GT_AMP;
	v->a[89529] = anon_sym_GT_PIPE;
	v->a[89530] = anon_sym_LT_AMP_DASH;
	v->a[89531] = anon_sym_GT_AMP_DASH;
	v->a[89532] = aux_sym_concatenation_token1;
	v->a[89533] = 10;
	v->a[89534] = actions(3);
	v->a[89535] = 1;
	v->a[89536] = sym_comment;
	v->a[89537] = actions(3172);
	v->a[89538] = 1;
	v->a[89539] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_4477(v);
}

void	small_parse_table_4477(t_small_parse_table_array *v)
{
	v->a[89540] = actions(3174);
	v->a[89541] = 1;
	v->a[89542] = anon_sym_DOLLAR;
	v->a[89543] = actions(3176);
	v->a[89544] = 1;
	v->a[89545] = anon_sym_DQUOTE;
	v->a[89546] = actions(3178);
	v->a[89547] = 1;
	v->a[89548] = anon_sym_DOLLAR_LBRACE;
	v->a[89549] = actions(3180);
	v->a[89550] = 1;
	v->a[89551] = anon_sym_DOLLAR_LPAREN;
	v->a[89552] = actions(3182);
	v->a[89553] = 1;
	v->a[89554] = anon_sym_BQUOTE;
	v->a[89555] = state(229);
	v->a[89556] = 2;
	v->a[89557] = sym_concatenation;
	v->a[89558] = aux_sym_for_statement_repeat1;
	v->a[89559] = actions(3602);
	small_parse_table_4478(v);
}

void	small_parse_table_4478(t_small_parse_table_array *v)
{
	v->a[89560] = 3;
	v->a[89561] = sym_raw_string;
	v->a[89562] = sym_number;
	v->a[89563] = sym_word;
	v->a[89564] = state(499);
	v->a[89565] = 5;
	v->a[89566] = sym_arithmetic_expansion;
	v->a[89567] = sym_string;
	v->a[89568] = sym_simple_expansion;
	v->a[89569] = sym_expansion;
	v->a[89570] = sym_command_substitution;
	v->a[89571] = 10;
	v->a[89572] = actions(3);
	v->a[89573] = 1;
	v->a[89574] = sym_comment;
	v->a[89575] = actions(749);
	v->a[89576] = 1;
	v->a[89577] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89578] = actions(751);
	v->a[89579] = 1;
	small_parse_table_4479(v);
}

void	small_parse_table_4479(t_small_parse_table_array *v)
{
	v->a[89580] = anon_sym_DOLLAR;
	v->a[89581] = actions(753);
	v->a[89582] = 1;
	v->a[89583] = anon_sym_DQUOTE;
	v->a[89584] = actions(755);
	v->a[89585] = 1;
	v->a[89586] = anon_sym_DOLLAR_LBRACE;
	v->a[89587] = actions(757);
	v->a[89588] = 1;
	v->a[89589] = anon_sym_DOLLAR_LPAREN;
	v->a[89590] = actions(759);
	v->a[89591] = 1;
	v->a[89592] = anon_sym_BQUOTE;
	v->a[89593] = state(233);
	v->a[89594] = 2;
	v->a[89595] = sym_concatenation;
	v->a[89596] = aux_sym_for_statement_repeat1;
	v->a[89597] = actions(747);
	v->a[89598] = 3;
	v->a[89599] = sym_raw_string;
	small_parse_table_4480(v);
}

/* EOF small_parse_table_895.c */
