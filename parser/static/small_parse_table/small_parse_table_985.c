/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_985.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4925(t_small_parse_table_array *v)
{
	v->a[98500] = state(1862);
	v->a[98501] = 7;
	v->a[98502] = sym_arithmetic_expansion;
	v->a[98503] = sym_brace_expression;
	v->a[98504] = sym_string;
	v->a[98505] = sym_number;
	v->a[98506] = sym_simple_expansion;
	v->a[98507] = sym_expansion;
	v->a[98508] = sym_command_substitution;
	v->a[98509] = 11;
	v->a[98510] = actions(3);
	v->a[98511] = 1;
	v->a[98512] = sym_comment;
	v->a[98513] = actions(1995);
	v->a[98514] = 1;
	v->a[98515] = anon_sym_BQUOTE;
	v->a[98516] = actions(3403);
	v->a[98517] = 1;
	v->a[98518] = aux_sym_heredoc_redirect_token1;
	v->a[98519] = actions(5403);
	small_parse_table_4926(v);
}

void	small_parse_table_4926(t_small_parse_table_array *v)
{
	v->a[98520] = 1;
	v->a[98521] = sym_file_descriptor;
	v->a[98522] = actions(2516);
	v->a[98523] = 2;
	v->a[98524] = anon_sym_PIPE;
	v->a[98525] = anon_sym_PIPE_AMP;
	v->a[98526] = actions(2945);
	v->a[98527] = 2;
	v->a[98528] = anon_sym_LT_LT;
	v->a[98529] = anon_sym_LT_LT_DASH;
	v->a[98530] = actions(3377);
	v->a[98531] = 2;
	v->a[98532] = anon_sym_AMP_AMP;
	v->a[98533] = anon_sym_PIPE_PIPE;
	v->a[98534] = actions(5401);
	v->a[98535] = 2;
	v->a[98536] = anon_sym_LT_AMP_DASH;
	v->a[98537] = anon_sym_GT_AMP_DASH;
	v->a[98538] = actions(3401);
	v->a[98539] = 3;
	small_parse_table_4927(v);
}

void	small_parse_table_4927(t_small_parse_table_array *v)
{
	v->a[98540] = anon_sym_SEMI_SEMI;
	v->a[98541] = anon_sym_AMP;
	v->a[98542] = anon_sym_SEMI;
	v->a[98543] = state(2140);
	v->a[98544] = 3;
	v->a[98545] = sym_file_redirect;
	v->a[98546] = sym_heredoc_redirect;
	v->a[98547] = aux_sym_redirected_statement_repeat1;
	v->a[98548] = actions(5399);
	v->a[98549] = 8;
	v->a[98550] = anon_sym_LT;
	v->a[98551] = anon_sym_GT;
	v->a[98552] = anon_sym_GT_GT;
	v->a[98553] = anon_sym_AMP_GT;
	v->a[98554] = anon_sym_AMP_GT_GT;
	v->a[98555] = anon_sym_LT_AMP;
	v->a[98556] = anon_sym_GT_AMP;
	v->a[98557] = anon_sym_GT_PIPE;
	v->a[98558] = 19;
	v->a[98559] = actions(3);
	small_parse_table_4928(v);
}

void	small_parse_table_4928(t_small_parse_table_array *v)
{
	v->a[98560] = 1;
	v->a[98561] = sym_comment;
	v->a[98562] = actions(5405);
	v->a[98563] = 1;
	v->a[98564] = sym_word;
	v->a[98565] = actions(5407);
	v->a[98566] = 1;
	v->a[98567] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[98568] = actions(5409);
	v->a[98569] = 1;
	v->a[98570] = anon_sym_DOLLAR;
	v->a[98571] = actions(5411);
	v->a[98572] = 1;
	v->a[98573] = sym__special_character;
	v->a[98574] = actions(5413);
	v->a[98575] = 1;
	v->a[98576] = anon_sym_DQUOTE;
	v->a[98577] = actions(5417);
	v->a[98578] = 1;
	v->a[98579] = aux_sym_number_token1;
	small_parse_table_4929(v);
}

void	small_parse_table_4929(t_small_parse_table_array *v)
{
	v->a[98580] = actions(5419);
	v->a[98581] = 1;
	v->a[98582] = aux_sym_number_token2;
	v->a[98583] = actions(5421);
	v->a[98584] = 1;
	v->a[98585] = anon_sym_DOLLAR_LBRACE;
	v->a[98586] = actions(5423);
	v->a[98587] = 1;
	v->a[98588] = anon_sym_DOLLAR_LPAREN;
	v->a[98589] = actions(5425);
	v->a[98590] = 1;
	v->a[98591] = anon_sym_BQUOTE;
	v->a[98592] = actions(5427);
	v->a[98593] = 1;
	v->a[98594] = anon_sym_DOLLAR_BQUOTE;
	v->a[98595] = actions(5429);
	v->a[98596] = 1;
	v->a[98597] = sym__comment_word;
	v->a[98598] = actions(5431);
	v->a[98599] = 1;
	small_parse_table_4930(v);
}

/* EOF small_parse_table_985.c */
