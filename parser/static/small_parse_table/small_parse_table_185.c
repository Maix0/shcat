/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_185.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_925(t_small_parse_table_array *v)
{
	v->a[18500] = sym_comment;
	v->a[18501] = actions(2666);
	v->a[18502] = 1;
	v->a[18503] = aux_sym_concatenation_token1;
	v->a[18504] = actions(2668);
	v->a[18505] = 1;
	v->a[18506] = sym__concat;
	v->a[18507] = state(488);
	v->a[18508] = 1;
	v->a[18509] = aux_sym_concatenation_repeat1;
	v->a[18510] = actions(2758);
	v->a[18511] = 5;
	v->a[18512] = sym_file_descriptor;
	v->a[18513] = sym_variable_name;
	v->a[18514] = sym_test_operator;
	v->a[18515] = sym__brace_start;
	v->a[18516] = aux_sym_heredoc_redirect_token1;
	v->a[18517] = actions(2756);
	v->a[18518] = 35;
	v->a[18519] = anon_sym_esac;
	small_parse_table_926(v);
}

void	small_parse_table_926(t_small_parse_table_array *v)
{
	v->a[18520] = anon_sym_PIPE;
	v->a[18521] = anon_sym_SEMI_SEMI;
	v->a[18522] = anon_sym_SEMI_AMP;
	v->a[18523] = anon_sym_SEMI_SEMI_AMP;
	v->a[18524] = anon_sym_PIPE_AMP;
	v->a[18525] = anon_sym_AMP_AMP;
	v->a[18526] = anon_sym_PIPE_PIPE;
	v->a[18527] = anon_sym_LT;
	v->a[18528] = anon_sym_GT;
	v->a[18529] = anon_sym_GT_GT;
	v->a[18530] = anon_sym_AMP_GT;
	v->a[18531] = anon_sym_AMP_GT_GT;
	v->a[18532] = anon_sym_LT_AMP;
	v->a[18533] = anon_sym_GT_AMP;
	v->a[18534] = anon_sym_GT_PIPE;
	v->a[18535] = anon_sym_LT_AMP_DASH;
	v->a[18536] = anon_sym_GT_AMP_DASH;
	v->a[18537] = anon_sym_LT_LT;
	v->a[18538] = anon_sym_LT_LT_DASH;
	v->a[18539] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_927(v);
}

void	small_parse_table_927(t_small_parse_table_array *v)
{
	v->a[18540] = anon_sym_AMP;
	v->a[18541] = anon_sym_DOLLAR;
	v->a[18542] = sym__special_character;
	v->a[18543] = anon_sym_DQUOTE;
	v->a[18544] = sym_raw_string;
	v->a[18545] = aux_sym_number_token1;
	v->a[18546] = aux_sym_number_token2;
	v->a[18547] = anon_sym_DOLLAR_LBRACE;
	v->a[18548] = anon_sym_DOLLAR_LPAREN;
	v->a[18549] = anon_sym_BQUOTE;
	v->a[18550] = anon_sym_DOLLAR_BQUOTE;
	v->a[18551] = aux_sym__simple_variable_name_token1;
	v->a[18552] = sym_word;
	v->a[18553] = anon_sym_SEMI;
	v->a[18554] = 6;
	v->a[18555] = actions(3);
	v->a[18556] = 1;
	v->a[18557] = sym_comment;
	v->a[18558] = actions(1727);
	v->a[18559] = 1;
	small_parse_table_928(v);
}

void	small_parse_table_928(t_small_parse_table_array *v)
{
	v->a[18560] = sym_variable_name;
	v->a[18561] = actions(1725);
	v->a[18562] = 2;
	v->a[18563] = aux_sym__simple_variable_name_token1;
	v->a[18564] = aux_sym__multiline_variable_name_token1;
	v->a[18565] = actions(816);
	v->a[18566] = 3;
	v->a[18567] = sym_file_descriptor;
	v->a[18568] = sym_test_operator;
	v->a[18569] = sym__brace_start;
	v->a[18570] = actions(1723);
	v->a[18571] = 9;
	v->a[18572] = anon_sym_BANG;
	v->a[18573] = anon_sym_DASH;
	v->a[18574] = anon_sym_STAR;
	v->a[18575] = anon_sym_QMARK;
	v->a[18576] = anon_sym_DOLLAR;
	v->a[18577] = anon_sym_POUND;
	v->a[18578] = anon_sym_AT;
	v->a[18579] = anon_sym_0;
	small_parse_table_929(v);
}

void	small_parse_table_929(t_small_parse_table_array *v)
{
	v->a[18580] = anon_sym__;
	v->a[18581] = actions(810);
	v->a[18582] = 28;
	v->a[18583] = anon_sym_PIPE;
	v->a[18584] = anon_sym_PIPE_AMP;
	v->a[18585] = anon_sym_AMP_AMP;
	v->a[18586] = anon_sym_PIPE_PIPE;
	v->a[18587] = anon_sym_LT;
	v->a[18588] = anon_sym_GT;
	v->a[18589] = anon_sym_GT_GT;
	v->a[18590] = anon_sym_AMP_GT;
	v->a[18591] = anon_sym_AMP_GT_GT;
	v->a[18592] = anon_sym_LT_AMP;
	v->a[18593] = anon_sym_GT_AMP;
	v->a[18594] = anon_sym_GT_PIPE;
	v->a[18595] = anon_sym_LT_AMP_DASH;
	v->a[18596] = anon_sym_GT_AMP_DASH;
	v->a[18597] = anon_sym_LT_LT;
	v->a[18598] = anon_sym_LT_LT_DASH;
	v->a[18599] = aux_sym_heredoc_redirect_token1;
	small_parse_table_930(v);
}

/* EOF small_parse_table_185.c */
