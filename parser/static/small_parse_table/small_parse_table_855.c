/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_855.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4275(t_small_parse_table_array *v)
{
	v->a[85500] = actions(3292);
	v->a[85501] = 1;
	v->a[85502] = anon_sym_DOLLAR;
	v->a[85503] = actions(3294);
	v->a[85504] = 1;
	v->a[85505] = anon_sym_DQUOTE;
	v->a[85506] = actions(3296);
	v->a[85507] = 1;
	v->a[85508] = anon_sym_DOLLAR_LBRACE;
	v->a[85509] = actions(3298);
	v->a[85510] = 1;
	v->a[85511] = anon_sym_DOLLAR_LPAREN;
	v->a[85512] = actions(3300);
	v->a[85513] = 1;
	v->a[85514] = anon_sym_BQUOTE;
	v->a[85515] = actions(3431);
	v->a[85516] = 1;
	v->a[85517] = sym__comment_word;
	v->a[85518] = actions(3433);
	v->a[85519] = 1;
	small_parse_table_4276(v);
}

void	small_parse_table_4276(t_small_parse_table_array *v)
{
	v->a[85520] = sym__empty_value;
	v->a[85521] = state(1714);
	v->a[85522] = 1;
	v->a[85523] = sym_concatenation;
	v->a[85524] = actions(3429);
	v->a[85525] = 3;
	v->a[85526] = sym_raw_string;
	v->a[85527] = sym_number;
	v->a[85528] = sym_word;
	v->a[85529] = state(1543);
	v->a[85530] = 5;
	v->a[85531] = sym_arithmetic_expansion;
	v->a[85532] = sym_string;
	v->a[85533] = sym_simple_expansion;
	v->a[85534] = sym_expansion;
	v->a[85535] = sym_command_substitution;
	v->a[85536] = 10;
	v->a[85537] = actions(3);
	v->a[85538] = 1;
	v->a[85539] = sym_comment;
	small_parse_table_4277(v);
}

void	small_parse_table_4277(t_small_parse_table_array *v)
{
	v->a[85540] = actions(3172);
	v->a[85541] = 1;
	v->a[85542] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85543] = actions(3174);
	v->a[85544] = 1;
	v->a[85545] = anon_sym_DOLLAR;
	v->a[85546] = actions(3176);
	v->a[85547] = 1;
	v->a[85548] = anon_sym_DQUOTE;
	v->a[85549] = actions(3178);
	v->a[85550] = 1;
	v->a[85551] = anon_sym_DOLLAR_LBRACE;
	v->a[85552] = actions(3180);
	v->a[85553] = 1;
	v->a[85554] = anon_sym_DOLLAR_LPAREN;
	v->a[85555] = actions(3182);
	v->a[85556] = 1;
	v->a[85557] = anon_sym_BQUOTE;
	v->a[85558] = actions(3437);
	v->a[85559] = 1;
	small_parse_table_4278(v);
}

void	small_parse_table_4278(t_small_parse_table_array *v)
{
	v->a[85560] = sym__bare_dollar;
	v->a[85561] = actions(3435);
	v->a[85562] = 5;
	v->a[85563] = aux_sym_concatenation_token1;
	v->a[85564] = sym_raw_string;
	v->a[85565] = sym_number;
	v->a[85566] = sym__comment_word;
	v->a[85567] = sym_word;
	v->a[85568] = state(460);
	v->a[85569] = 5;
	v->a[85570] = sym_arithmetic_expansion;
	v->a[85571] = sym_string;
	v->a[85572] = sym_simple_expansion;
	v->a[85573] = sym_expansion;
	v->a[85574] = sym_command_substitution;
	v->a[85575] = 5;
	v->a[85576] = actions(1094);
	v->a[85577] = 1;
	v->a[85578] = sym_comment;
	v->a[85579] = actions(3439);
	small_parse_table_4279(v);
}

void	small_parse_table_4279(t_small_parse_table_array *v)
{
	v->a[85580] = 1;
	v->a[85581] = anon_sym_PIPE;
	v->a[85582] = state(1648);
	v->a[85583] = 1;
	v->a[85584] = aux_sym_pipeline_repeat1;
	v->a[85585] = actions(2878);
	v->a[85586] = 6;
	v->a[85587] = anon_sym_LT;
	v->a[85588] = anon_sym_GT;
	v->a[85589] = anon_sym_AMP_GT;
	v->a[85590] = anon_sym_LT_AMP;
	v->a[85591] = anon_sym_GT_AMP;
	v->a[85592] = anon_sym_LT_LT;
	v->a[85593] = actions(2880);
	v->a[85594] = 9;
	v->a[85595] = sym_file_descriptor;
	v->a[85596] = anon_sym_AMP_AMP;
	v->a[85597] = anon_sym_PIPE_PIPE;
	v->a[85598] = anon_sym_GT_GT;
	v->a[85599] = anon_sym_AMP_GT_GT;
	small_parse_table_4280(v);
}

/* EOF small_parse_table_855.c */
