/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_607.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3035(t_small_parse_table_array *v)
{
	v->a[60700] = actions(2503);
	v->a[60701] = 1;
	v->a[60702] = anon_sym_DQUOTE;
	v->a[60703] = actions(2433);
	v->a[60704] = 2;
	v->a[60705] = aux_sym__simple_variable_name_token1;
	v->a[60706] = aux_sym__multiline_variable_name_token1;
	v->a[60707] = actions(2427);
	v->a[60708] = 8;
	v->a[60709] = anon_sym_BANG;
	v->a[60710] = anon_sym_DASH;
	v->a[60711] = anon_sym_STAR;
	v->a[60712] = anon_sym_QMARK;
	v->a[60713] = anon_sym_DOLLAR;
	v->a[60714] = anon_sym_POUND;
	v->a[60715] = anon_sym_AT;
	v->a[60716] = anon_sym_0;
	v->a[60717] = 6;
	v->a[60718] = actions(3);
	v->a[60719] = 1;
	small_parse_table_3036(v);
}

void	small_parse_table_3036(t_small_parse_table_array *v)
{
	v->a[60720] = sym_comment;
	v->a[60721] = actions(2505);
	v->a[60722] = 1;
	v->a[60723] = aux_sym_heredoc_redirect_token1;
	v->a[60724] = state(1680);
	v->a[60725] = 1;
	v->a[60726] = sym__heredoc_expression;
	v->a[60727] = actions(924);
	v->a[60728] = 2;
	v->a[60729] = anon_sym_AMP_AMP;
	v->a[60730] = anon_sym_PIPE_PIPE;
	v->a[60731] = state(1313);
	v->a[60732] = 2;
	v->a[60733] = sym_file_redirect;
	v->a[60734] = aux_sym_redirected_statement_repeat2;
	v->a[60735] = actions(926);
	v->a[60736] = 7;
	v->a[60737] = anon_sym_LT;
	v->a[60738] = anon_sym_GT;
	v->a[60739] = anon_sym_GT_GT;
	small_parse_table_3037(v);
}

void	small_parse_table_3037(t_small_parse_table_array *v)
{
	v->a[60740] = anon_sym_LT_AMP;
	v->a[60741] = anon_sym_GT_AMP;
	v->a[60742] = anon_sym_GT_PIPE;
	v->a[60743] = anon_sym_LT_GT;
	v->a[60744] = 6;
	v->a[60745] = actions(3);
	v->a[60746] = 1;
	v->a[60747] = sym_comment;
	v->a[60748] = actions(2431);
	v->a[60749] = 1;
	v->a[60750] = sym_string_content;
	v->a[60751] = actions(2435);
	v->a[60752] = 1;
	v->a[60753] = sym_variable_name;
	v->a[60754] = actions(2507);
	v->a[60755] = 1;
	v->a[60756] = anon_sym_DQUOTE;
	v->a[60757] = actions(2433);
	v->a[60758] = 2;
	v->a[60759] = aux_sym__simple_variable_name_token1;
	small_parse_table_3038(v);
}

void	small_parse_table_3038(t_small_parse_table_array *v)
{
	v->a[60760] = aux_sym__multiline_variable_name_token1;
	v->a[60761] = actions(2427);
	v->a[60762] = 8;
	v->a[60763] = anon_sym_BANG;
	v->a[60764] = anon_sym_DASH;
	v->a[60765] = anon_sym_STAR;
	v->a[60766] = anon_sym_QMARK;
	v->a[60767] = anon_sym_DOLLAR;
	v->a[60768] = anon_sym_POUND;
	v->a[60769] = anon_sym_AT;
	v->a[60770] = anon_sym_0;
	v->a[60771] = 6;
	v->a[60772] = actions(3);
	v->a[60773] = 1;
	v->a[60774] = sym_comment;
	v->a[60775] = actions(2431);
	v->a[60776] = 1;
	v->a[60777] = sym_string_content;
	v->a[60778] = actions(2435);
	v->a[60779] = 1;
	small_parse_table_3039(v);
}

void	small_parse_table_3039(t_small_parse_table_array *v)
{
	v->a[60780] = sym_variable_name;
	v->a[60781] = actions(2509);
	v->a[60782] = 1;
	v->a[60783] = anon_sym_DQUOTE;
	v->a[60784] = actions(2433);
	v->a[60785] = 2;
	v->a[60786] = aux_sym__simple_variable_name_token1;
	v->a[60787] = aux_sym__multiline_variable_name_token1;
	v->a[60788] = actions(2427);
	v->a[60789] = 8;
	v->a[60790] = anon_sym_BANG;
	v->a[60791] = anon_sym_DASH;
	v->a[60792] = anon_sym_STAR;
	v->a[60793] = anon_sym_QMARK;
	v->a[60794] = anon_sym_DOLLAR;
	v->a[60795] = anon_sym_POUND;
	v->a[60796] = anon_sym_AT;
	v->a[60797] = anon_sym_0;
	v->a[60798] = 6;
	v->a[60799] = actions(3);
	small_parse_table_3040(v);
}

/* EOF small_parse_table_607.c */
