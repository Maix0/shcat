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
	v->a[89501] = anon_sym_LT_AMP_DASH;
	v->a[89502] = anon_sym_GT_AMP_DASH;
	v->a[89503] = actions(3880);
	v->a[89504] = 3;
	v->a[89505] = anon_sym_GT_GT;
	v->a[89506] = anon_sym_AMP_GT_GT;
	v->a[89507] = anon_sym_GT_PIPE;
	v->a[89508] = actions(3878);
	v->a[89509] = 5;
	v->a[89510] = anon_sym_LT;
	v->a[89511] = anon_sym_GT;
	v->a[89512] = anon_sym_AMP_GT;
	v->a[89513] = anon_sym_LT_AMP;
	v->a[89514] = anon_sym_GT_AMP;
	v->a[89515] = 10;
	v->a[89516] = actions(3);
	v->a[89517] = 1;
	v->a[89518] = sym_comment;
	v->a[89519] = actions(3540);
	small_parse_table_4476(v);
}

void	small_parse_table_4476(t_small_parse_table_array *v)
{
	v->a[89520] = 1;
	v->a[89521] = anon_sym_DQUOTE;
	v->a[89522] = actions(3712);
	v->a[89523] = 1;
	v->a[89524] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89525] = actions(3716);
	v->a[89526] = 1;
	v->a[89527] = sym_string_content;
	v->a[89528] = actions(3718);
	v->a[89529] = 1;
	v->a[89530] = anon_sym_DOLLAR_LBRACE;
	v->a[89531] = actions(3720);
	v->a[89532] = 1;
	v->a[89533] = anon_sym_DOLLAR_LPAREN;
	v->a[89534] = actions(3722);
	v->a[89535] = 1;
	v->a[89536] = anon_sym_BQUOTE;
	v->a[89537] = actions(3884);
	v->a[89538] = 1;
	v->a[89539] = anon_sym_DOLLAR;
	small_parse_table_4477(v);
}

void	small_parse_table_4477(t_small_parse_table_array *v)
{
	v->a[89540] = state(1738);
	v->a[89541] = 1;
	v->a[89542] = aux_sym_string_repeat1;
	v->a[89543] = state(1869);
	v->a[89544] = 4;
	v->a[89545] = sym_arithmetic_expansion;
	v->a[89546] = sym_simple_expansion;
	v->a[89547] = sym_expansion;
	v->a[89548] = sym_command_substitution;
	v->a[89549] = 10;
	v->a[89550] = actions(3);
	v->a[89551] = 1;
	v->a[89552] = sym_comment;
	v->a[89553] = actions(3508);
	v->a[89554] = 1;
	v->a[89555] = anon_sym_DQUOTE;
	v->a[89556] = actions(3712);
	v->a[89557] = 1;
	v->a[89558] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89559] = actions(3716);
	small_parse_table_4478(v);
}

void	small_parse_table_4478(t_small_parse_table_array *v)
{
	v->a[89560] = 1;
	v->a[89561] = sym_string_content;
	v->a[89562] = actions(3718);
	v->a[89563] = 1;
	v->a[89564] = anon_sym_DOLLAR_LBRACE;
	v->a[89565] = actions(3720);
	v->a[89566] = 1;
	v->a[89567] = anon_sym_DOLLAR_LPAREN;
	v->a[89568] = actions(3722);
	v->a[89569] = 1;
	v->a[89570] = anon_sym_BQUOTE;
	v->a[89571] = actions(3886);
	v->a[89572] = 1;
	v->a[89573] = anon_sym_DOLLAR;
	v->a[89574] = state(1738);
	v->a[89575] = 1;
	v->a[89576] = aux_sym_string_repeat1;
	v->a[89577] = state(1869);
	v->a[89578] = 4;
	v->a[89579] = sym_arithmetic_expansion;
	small_parse_table_4479(v);
}

void	small_parse_table_4479(t_small_parse_table_array *v)
{
	v->a[89580] = sym_simple_expansion;
	v->a[89581] = sym_expansion;
	v->a[89582] = sym_command_substitution;
	v->a[89583] = 10;
	v->a[89584] = actions(3);
	v->a[89585] = 1;
	v->a[89586] = sym_comment;
	v->a[89587] = actions(3712);
	v->a[89588] = 1;
	v->a[89589] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89590] = actions(3716);
	v->a[89591] = 1;
	v->a[89592] = sym_string_content;
	v->a[89593] = actions(3718);
	v->a[89594] = 1;
	v->a[89595] = anon_sym_DOLLAR_LBRACE;
	v->a[89596] = actions(3720);
	v->a[89597] = 1;
	v->a[89598] = anon_sym_DOLLAR_LPAREN;
	v->a[89599] = actions(3722);
	small_parse_table_4480(v);
}

/* EOF small_parse_table_895.c */
