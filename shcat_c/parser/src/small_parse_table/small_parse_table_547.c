/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_547.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2735(t_small_parse_table_array *v)
{
	v->a[54700] = anon_sym_LPAREN_LPAREN;
	v->a[54701] = anon_sym_SEMI;
	v->a[54702] = anon_sym_PIPE_PIPE;
	v->a[54703] = anon_sym_AMP_AMP;
	v->a[54704] = anon_sym_PIPE;
	v->a[54705] = anon_sym_AMP;
	v->a[54706] = anon_sym_LT;
	v->a[54707] = anon_sym_GT;
	v->a[54708] = anon_sym_LT_LT;
	v->a[54709] = anon_sym_GT_GT;
	v->a[54710] = anon_sym_SEMI_SEMI;
	v->a[54711] = anon_sym_SEMI_AMP;
	v->a[54712] = anon_sym_SEMI_SEMI_AMP;
	v->a[54713] = anon_sym_PIPE_AMP;
	v->a[54714] = anon_sym_AMP_GT;
	v->a[54715] = anon_sym_AMP_GT_GT;
	v->a[54716] = anon_sym_LT_AMP;
	v->a[54717] = anon_sym_GT_AMP;
	v->a[54718] = anon_sym_GT_PIPE;
	v->a[54719] = anon_sym_LT_AMP_DASH;
	small_parse_table_2736(v);
}

void	small_parse_table_2736(t_small_parse_table_array *v)
{
	v->a[54720] = anon_sym_GT_AMP_DASH;
	v->a[54721] = anon_sym_LT_LT_DASH;
	v->a[54722] = anon_sym_LT_LT_LT;
	v->a[54723] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54724] = anon_sym_DOLLAR_LBRACK;
	v->a[54725] = anon_sym_DOLLAR;
	v->a[54726] = sym__special_character;
	v->a[54727] = anon_sym_DQUOTE;
	v->a[54728] = sym_raw_string;
	v->a[54729] = sym_ansi_c_string;
	v->a[54730] = aux_sym_number_token1;
	v->a[54731] = aux_sym_number_token2;
	v->a[54732] = anon_sym_DOLLAR_LBRACE;
	v->a[54733] = anon_sym_DOLLAR_LPAREN;
	v->a[54734] = anon_sym_BQUOTE;
	v->a[54735] = anon_sym_DOLLAR_BQUOTE;
	v->a[54736] = anon_sym_LT_LPAREN;
	v->a[54737] = anon_sym_GT_LPAREN;
	v->a[54738] = sym_word;
	v->a[54739] = 3;
	small_parse_table_2737(v);
}

void	small_parse_table_2737(t_small_parse_table_array *v)
{
	v->a[54740] = actions(3);
	v->a[54741] = 1;
	v->a[54742] = sym_comment;
	v->a[54743] = actions(1358);
	v->a[54744] = 6;
	v->a[54745] = sym_file_descriptor;
	v->a[54746] = sym__concat;
	v->a[54747] = sym_variable_name;
	v->a[54748] = sym_test_operator;
	v->a[54749] = sym__brace_start;
	v->a[54750] = aux_sym_heredoc_redirect_token1;
	v->a[54751] = actions(1356);
	v->a[54752] = 41;
	v->a[54753] = anon_sym_LPAREN_LPAREN;
	v->a[54754] = anon_sym_SEMI;
	v->a[54755] = anon_sym_PIPE_PIPE;
	v->a[54756] = anon_sym_AMP_AMP;
	v->a[54757] = anon_sym_PIPE;
	v->a[54758] = anon_sym_AMP;
	v->a[54759] = anon_sym_LT;
	small_parse_table_2738(v);
}

void	small_parse_table_2738(t_small_parse_table_array *v)
{
	v->a[54760] = anon_sym_GT;
	v->a[54761] = anon_sym_LT_LT;
	v->a[54762] = anon_sym_GT_GT;
	v->a[54763] = anon_sym_esac;
	v->a[54764] = anon_sym_SEMI_SEMI;
	v->a[54765] = anon_sym_SEMI_AMP;
	v->a[54766] = anon_sym_SEMI_SEMI_AMP;
	v->a[54767] = anon_sym_PIPE_AMP;
	v->a[54768] = anon_sym_AMP_GT;
	v->a[54769] = anon_sym_AMP_GT_GT;
	v->a[54770] = anon_sym_LT_AMP;
	v->a[54771] = anon_sym_GT_AMP;
	v->a[54772] = anon_sym_GT_PIPE;
	v->a[54773] = anon_sym_LT_AMP_DASH;
	v->a[54774] = anon_sym_GT_AMP_DASH;
	v->a[54775] = anon_sym_LT_LT_DASH;
	v->a[54776] = anon_sym_LT_LT_LT;
	v->a[54777] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54778] = anon_sym_DOLLAR_LBRACK;
	v->a[54779] = aux_sym_concatenation_token1;
	small_parse_table_2739(v);
}

void	small_parse_table_2739(t_small_parse_table_array *v)
{
	v->a[54780] = anon_sym_DOLLAR;
	v->a[54781] = sym__special_character;
	v->a[54782] = anon_sym_DQUOTE;
	v->a[54783] = sym_raw_string;
	v->a[54784] = sym_ansi_c_string;
	v->a[54785] = aux_sym_number_token1;
	v->a[54786] = aux_sym_number_token2;
	v->a[54787] = anon_sym_DOLLAR_LBRACE;
	v->a[54788] = anon_sym_DOLLAR_LPAREN;
	v->a[54789] = anon_sym_BQUOTE;
	v->a[54790] = anon_sym_DOLLAR_BQUOTE;
	v->a[54791] = anon_sym_LT_LPAREN;
	v->a[54792] = anon_sym_GT_LPAREN;
	v->a[54793] = sym_word;
	v->a[54794] = 3;
	v->a[54795] = actions(3);
	v->a[54796] = 1;
	v->a[54797] = sym_comment;
	v->a[54798] = actions(1346);
	v->a[54799] = 6;
	small_parse_table_2740(v);
}

/* EOF small_parse_table_547.c */
