/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_617.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3085(t_small_parse_table_array *v)
{
	v->a[61700] = actions(3625);
	v->a[61701] = 12;
	v->a[61702] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61703] = anon_sym_DOLLAR;
	v->a[61704] = sym__special_character;
	v->a[61705] = anon_sym_DQUOTE;
	v->a[61706] = sym_raw_string;
	v->a[61707] = aux_sym_number_token1;
	v->a[61708] = aux_sym_number_token2;
	v->a[61709] = anon_sym_DOLLAR_LBRACE;
	v->a[61710] = anon_sym_DOLLAR_LPAREN;
	v->a[61711] = anon_sym_BQUOTE;
	v->a[61712] = anon_sym_DOLLAR_BQUOTE;
	v->a[61713] = sym_word;
	v->a[61714] = 3;
	v->a[61715] = actions(3);
	v->a[61716] = 1;
	v->a[61717] = sym_comment;
	v->a[61718] = actions(2664);
	v->a[61719] = 5;
	small_parse_table_3086(v);
}

void	small_parse_table_3086(t_small_parse_table_array *v)
{
	v->a[61720] = sym_file_descriptor;
	v->a[61721] = sym_test_operator;
	v->a[61722] = sym__bare_dollar;
	v->a[61723] = sym__brace_start;
	v->a[61724] = aux_sym_heredoc_redirect_token1;
	v->a[61725] = actions(2662);
	v->a[61726] = 32;
	v->a[61727] = anon_sym_PIPE;
	v->a[61728] = anon_sym_RPAREN;
	v->a[61729] = anon_sym_SEMI_SEMI;
	v->a[61730] = anon_sym_PIPE_AMP;
	v->a[61731] = anon_sym_AMP_AMP;
	v->a[61732] = anon_sym_PIPE_PIPE;
	v->a[61733] = anon_sym_LT;
	v->a[61734] = anon_sym_GT;
	v->a[61735] = anon_sym_GT_GT;
	v->a[61736] = anon_sym_AMP_GT;
	v->a[61737] = anon_sym_AMP_GT_GT;
	v->a[61738] = anon_sym_LT_AMP;
	v->a[61739] = anon_sym_GT_AMP;
	small_parse_table_3087(v);
}

void	small_parse_table_3087(t_small_parse_table_array *v)
{
	v->a[61740] = anon_sym_GT_PIPE;
	v->a[61741] = anon_sym_LT_AMP_DASH;
	v->a[61742] = anon_sym_GT_AMP_DASH;
	v->a[61743] = anon_sym_LT_LT;
	v->a[61744] = anon_sym_LT_LT_DASH;
	v->a[61745] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61746] = anon_sym_AMP;
	v->a[61747] = anon_sym_DOLLAR;
	v->a[61748] = sym__special_character;
	v->a[61749] = anon_sym_DQUOTE;
	v->a[61750] = sym_raw_string;
	v->a[61751] = aux_sym_number_token1;
	v->a[61752] = aux_sym_number_token2;
	v->a[61753] = anon_sym_DOLLAR_LBRACE;
	v->a[61754] = anon_sym_DOLLAR_LPAREN;
	v->a[61755] = anon_sym_BQUOTE;
	v->a[61756] = anon_sym_DOLLAR_BQUOTE;
	v->a[61757] = sym_word;
	v->a[61758] = anon_sym_SEMI;
	v->a[61759] = 3;
	small_parse_table_3088(v);
}

void	small_parse_table_3088(t_small_parse_table_array *v)
{
	v->a[61760] = actions(3);
	v->a[61761] = 1;
	v->a[61762] = sym_comment;
	v->a[61763] = actions(1182);
	v->a[61764] = 6;
	v->a[61765] = sym_file_descriptor;
	v->a[61766] = sym_variable_name;
	v->a[61767] = sym_test_operator;
	v->a[61768] = sym__brace_start;
	v->a[61769] = ts_builtin_sym_end;
	v->a[61770] = aux_sym_heredoc_redirect_token1;
	v->a[61771] = actions(1180);
	v->a[61772] = 31;
	v->a[61773] = anon_sym_PIPE;
	v->a[61774] = anon_sym_SEMI_SEMI;
	v->a[61775] = anon_sym_PIPE_AMP;
	v->a[61776] = anon_sym_AMP_AMP;
	v->a[61777] = anon_sym_PIPE_PIPE;
	v->a[61778] = anon_sym_LT;
	v->a[61779] = anon_sym_GT;
	small_parse_table_3089(v);
}

void	small_parse_table_3089(t_small_parse_table_array *v)
{
	v->a[61780] = anon_sym_GT_GT;
	v->a[61781] = anon_sym_AMP_GT;
	v->a[61782] = anon_sym_AMP_GT_GT;
	v->a[61783] = anon_sym_LT_AMP;
	v->a[61784] = anon_sym_GT_AMP;
	v->a[61785] = anon_sym_GT_PIPE;
	v->a[61786] = anon_sym_LT_AMP_DASH;
	v->a[61787] = anon_sym_GT_AMP_DASH;
	v->a[61788] = anon_sym_LT_LT;
	v->a[61789] = anon_sym_LT_LT_DASH;
	v->a[61790] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61791] = anon_sym_AMP;
	v->a[61792] = anon_sym_DOLLAR;
	v->a[61793] = sym__special_character;
	v->a[61794] = anon_sym_DQUOTE;
	v->a[61795] = sym_raw_string;
	v->a[61796] = aux_sym_number_token1;
	v->a[61797] = aux_sym_number_token2;
	v->a[61798] = anon_sym_DOLLAR_LBRACE;
	v->a[61799] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3090(v);
}

/* EOF small_parse_table_617.c */
