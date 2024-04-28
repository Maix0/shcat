/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_927.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4635(t_small_parse_table_array *v)
{
	v->a[92700] = 7;
	v->a[92701] = anon_sym_PIPE;
	v->a[92702] = anon_sym_LT;
	v->a[92703] = anon_sym_GT;
	v->a[92704] = anon_sym_LT_LT;
	v->a[92705] = anon_sym_AMP_GT;
	v->a[92706] = anon_sym_LT_AMP;
	v->a[92707] = anon_sym_GT_AMP;
	v->a[92708] = actions(4348);
	v->a[92709] = 10;
	v->a[92710] = sym_file_descriptor;
	v->a[92711] = anon_sym_PIPE_PIPE;
	v->a[92712] = anon_sym_AMP_AMP;
	v->a[92713] = anon_sym_GT_GT;
	v->a[92714] = anon_sym_PIPE_AMP;
	v->a[92715] = anon_sym_AMP_GT_GT;
	v->a[92716] = anon_sym_GT_PIPE;
	v->a[92717] = anon_sym_LT_AMP_DASH;
	v->a[92718] = anon_sym_GT_AMP_DASH;
	v->a[92719] = anon_sym_LT_LT_DASH;
	small_parse_table_4636(v);
}

void	small_parse_table_4636(t_small_parse_table_array *v)
{
	v->a[92720] = actions(4261);
	v->a[92721] = 15;
	v->a[92722] = sym_test_operator;
	v->a[92723] = sym__brace_start;
	v->a[92724] = anon_sym_LPAREN_LPAREN;
	v->a[92725] = anon_sym_LT_LT_LT;
	v->a[92726] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[92727] = anon_sym_DOLLAR_LBRACK;
	v->a[92728] = sym__special_character;
	v->a[92729] = anon_sym_DQUOTE;
	v->a[92730] = sym_raw_string;
	v->a[92731] = sym_ansi_c_string;
	v->a[92732] = anon_sym_DOLLAR_LBRACE;
	v->a[92733] = anon_sym_BQUOTE;
	v->a[92734] = anon_sym_DOLLAR_BQUOTE;
	v->a[92735] = anon_sym_LT_LPAREN;
	v->a[92736] = anon_sym_GT_LPAREN;
	v->a[92737] = 6;
	v->a[92738] = actions(3);
	v->a[92739] = 1;
	small_parse_table_4637(v);
}

void	small_parse_table_4637(t_small_parse_table_array *v)
{
	v->a[92740] = sym_comment;
	v->a[92741] = actions(6017);
	v->a[92742] = 1;
	v->a[92743] = aux_sym_concatenation_token1;
	v->a[92744] = actions(6100);
	v->a[92745] = 1;
	v->a[92746] = sym__concat;
	v->a[92747] = state(1911);
	v->a[92748] = 1;
	v->a[92749] = aux_sym_concatenation_repeat1;
	v->a[92750] = actions(1267);
	v->a[92751] = 5;
	v->a[92752] = sym_file_descriptor;
	v->a[92753] = sym_test_operator;
	v->a[92754] = sym__brace_start;
	v->a[92755] = ts_builtin_sym_end;
	v->a[92756] = aux_sym_heredoc_redirect_token1;
	v->a[92757] = actions(1265);
	v->a[92758] = 36;
	v->a[92759] = anon_sym_LPAREN_LPAREN;
	small_parse_table_4638(v);
}

void	small_parse_table_4638(t_small_parse_table_array *v)
{
	v->a[92760] = anon_sym_SEMI;
	v->a[92761] = anon_sym_PIPE_PIPE;
	v->a[92762] = anon_sym_AMP_AMP;
	v->a[92763] = anon_sym_PIPE;
	v->a[92764] = anon_sym_AMP;
	v->a[92765] = anon_sym_LT;
	v->a[92766] = anon_sym_GT;
	v->a[92767] = anon_sym_LT_LT;
	v->a[92768] = anon_sym_GT_GT;
	v->a[92769] = anon_sym_SEMI_SEMI;
	v->a[92770] = anon_sym_PIPE_AMP;
	v->a[92771] = anon_sym_AMP_GT;
	v->a[92772] = anon_sym_AMP_GT_GT;
	v->a[92773] = anon_sym_LT_AMP;
	v->a[92774] = anon_sym_GT_AMP;
	v->a[92775] = anon_sym_GT_PIPE;
	v->a[92776] = anon_sym_LT_AMP_DASH;
	v->a[92777] = anon_sym_GT_AMP_DASH;
	v->a[92778] = anon_sym_LT_LT_DASH;
	v->a[92779] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_4639(v);
}

void	small_parse_table_4639(t_small_parse_table_array *v)
{
	v->a[92780] = anon_sym_DOLLAR_LBRACK;
	v->a[92781] = anon_sym_DOLLAR;
	v->a[92782] = sym__special_character;
	v->a[92783] = anon_sym_DQUOTE;
	v->a[92784] = sym_raw_string;
	v->a[92785] = sym_ansi_c_string;
	v->a[92786] = aux_sym_number_token1;
	v->a[92787] = aux_sym_number_token2;
	v->a[92788] = anon_sym_DOLLAR_LBRACE;
	v->a[92789] = anon_sym_DOLLAR_LPAREN;
	v->a[92790] = anon_sym_BQUOTE;
	v->a[92791] = anon_sym_DOLLAR_BQUOTE;
	v->a[92792] = anon_sym_LT_LPAREN;
	v->a[92793] = anon_sym_GT_LPAREN;
	v->a[92794] = sym_word;
	v->a[92795] = 5;
	v->a[92796] = actions(3);
	v->a[92797] = 1;
	v->a[92798] = sym_comment;
	v->a[92799] = actions(5932);
	small_parse_table_4640(v);
}

/* EOF small_parse_table_927.c */
