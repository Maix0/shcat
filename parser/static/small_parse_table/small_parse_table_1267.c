/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1267.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6335(t_small_parse_table_array *v)
{
	v->a[126700] = 5;
	v->a[126701] = anon_sym_LT;
	v->a[126702] = anon_sym_GT;
	v->a[126703] = anon_sym_AMP_GT;
	v->a[126704] = anon_sym_LT_AMP;
	v->a[126705] = anon_sym_GT_AMP;
	v->a[126706] = 9;
	v->a[126707] = actions(57);
	v->a[126708] = 1;
	v->a[126709] = sym_comment;
	v->a[126710] = actions(2945);
	v->a[126711] = 1;
	v->a[126712] = anon_sym_LT_LT;
	v->a[126713] = actions(7134);
	v->a[126714] = 1;
	v->a[126715] = sym_file_descriptor;
	v->a[126716] = actions(7241);
	v->a[126717] = 1;
	v->a[126718] = anon_sym_LT_LT_DASH;
	v->a[126719] = actions(7243);
	small_parse_table_6336(v);
}

void	small_parse_table_6336(t_small_parse_table_array *v)
{
	v->a[126720] = 2;
	v->a[126721] = anon_sym_AMP_AMP;
	v->a[126722] = anon_sym_PIPE_PIPE;
	v->a[126723] = actions(7247);
	v->a[126724] = 2;
	v->a[126725] = anon_sym_LT_AMP_DASH;
	v->a[126726] = anon_sym_GT_AMP_DASH;
	v->a[126727] = actions(7245);
	v->a[126728] = 3;
	v->a[126729] = anon_sym_GT_GT;
	v->a[126730] = anon_sym_AMP_GT_GT;
	v->a[126731] = anon_sym_GT_PIPE;
	v->a[126732] = state(2613);
	v->a[126733] = 3;
	v->a[126734] = sym_file_redirect;
	v->a[126735] = sym_heredoc_redirect;
	v->a[126736] = aux_sym_redirected_statement_repeat1;
	v->a[126737] = actions(7130);
	v->a[126738] = 5;
	v->a[126739] = anon_sym_LT;
	small_parse_table_6337(v);
}

void	small_parse_table_6337(t_small_parse_table_array *v)
{
	v->a[126740] = anon_sym_GT;
	v->a[126741] = anon_sym_AMP_GT;
	v->a[126742] = anon_sym_LT_AMP;
	v->a[126743] = anon_sym_GT_AMP;
	v->a[126744] = 6;
	v->a[126745] = actions(3);
	v->a[126746] = 1;
	v->a[126747] = sym_comment;
	v->a[126748] = actions(7092);
	v->a[126749] = 1;
	v->a[126750] = aux_sym_concatenation_token1;
	v->a[126751] = actions(7249);
	v->a[126752] = 1;
	v->a[126753] = sym__concat;
	v->a[126754] = state(2607);
	v->a[126755] = 1;
	v->a[126756] = aux_sym_concatenation_repeat1;
	v->a[126757] = actions(2690);
	v->a[126758] = 3;
	v->a[126759] = sym_test_operator;
	small_parse_table_6338(v);
}

void	small_parse_table_6338(t_small_parse_table_array *v)
{
	v->a[126760] = sym__brace_start;
	v->a[126761] = aux_sym_heredoc_redirect_token1;
	v->a[126762] = actions(2688);
	v->a[126763] = 12;
	v->a[126764] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[126765] = anon_sym_DOLLAR;
	v->a[126766] = sym__special_character;
	v->a[126767] = anon_sym_DQUOTE;
	v->a[126768] = sym_raw_string;
	v->a[126769] = aux_sym_number_token1;
	v->a[126770] = aux_sym_number_token2;
	v->a[126771] = anon_sym_DOLLAR_LBRACE;
	v->a[126772] = anon_sym_DOLLAR_LPAREN;
	v->a[126773] = anon_sym_BQUOTE;
	v->a[126774] = anon_sym_DOLLAR_BQUOTE;
	v->a[126775] = sym_word;
	v->a[126776] = 9;
	v->a[126777] = actions(57);
	v->a[126778] = 1;
	v->a[126779] = sym_comment;
	small_parse_table_6339(v);
}

void	small_parse_table_6339(t_small_parse_table_array *v)
{
	v->a[126780] = actions(2708);
	v->a[126781] = 1;
	v->a[126782] = anon_sym_LT_LT;
	v->a[126783] = actions(5243);
	v->a[126784] = 1;
	v->a[126785] = sym_file_descriptor;
	v->a[126786] = actions(7257);
	v->a[126787] = 1;
	v->a[126788] = anon_sym_LT_LT_DASH;
	v->a[126789] = actions(7251);
	v->a[126790] = 2;
	v->a[126791] = anon_sym_AMP_AMP;
	v->a[126792] = anon_sym_PIPE_PIPE;
	v->a[126793] = actions(7255);
	v->a[126794] = 2;
	v->a[126795] = anon_sym_LT_AMP_DASH;
	v->a[126796] = anon_sym_GT_AMP_DASH;
	v->a[126797] = actions(7253);
	v->a[126798] = 3;
	v->a[126799] = anon_sym_GT_GT;
	small_parse_table_6340(v);
}

/* EOF small_parse_table_1267.c */
