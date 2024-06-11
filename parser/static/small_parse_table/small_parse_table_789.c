/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_789.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3945(t_small_parse_table_array *v)
{
	v->a[78900] = 2;
	v->a[78901] = sym_file_descriptor;
	v->a[78902] = aux_sym_heredoc_redirect_token1;
	v->a[78903] = actions(610);
	v->a[78904] = 19;
	v->a[78905] = anon_sym_esac;
	v->a[78906] = anon_sym_PIPE;
	v->a[78907] = anon_sym_SEMI_SEMI;
	v->a[78908] = anon_sym_AMP_AMP;
	v->a[78909] = anon_sym_PIPE_PIPE;
	v->a[78910] = anon_sym_LT;
	v->a[78911] = anon_sym_GT;
	v->a[78912] = anon_sym_GT_GT;
	v->a[78913] = anon_sym_AMP_GT;
	v->a[78914] = anon_sym_AMP_GT_GT;
	v->a[78915] = anon_sym_LT_AMP;
	v->a[78916] = anon_sym_GT_AMP;
	v->a[78917] = anon_sym_GT_PIPE;
	v->a[78918] = anon_sym_LT_AMP_DASH;
	v->a[78919] = anon_sym_GT_AMP_DASH;
	small_parse_table_3946(v);
}

void	small_parse_table_3946(t_small_parse_table_array *v)
{
	v->a[78920] = anon_sym_LT_LT;
	v->a[78921] = anon_sym_LT_LT_DASH;
	v->a[78922] = anon_sym_AMP;
	v->a[78923] = anon_sym_SEMI;
	v->a[78924] = 3;
	v->a[78925] = actions(3);
	v->a[78926] = 1;
	v->a[78927] = sym_comment;
	v->a[78928] = actions(2671);
	v->a[78929] = 2;
	v->a[78930] = sym_file_descriptor;
	v->a[78931] = aux_sym_heredoc_redirect_token1;
	v->a[78932] = actions(2673);
	v->a[78933] = 19;
	v->a[78934] = anon_sym_esac;
	v->a[78935] = anon_sym_PIPE;
	v->a[78936] = anon_sym_SEMI_SEMI;
	v->a[78937] = anon_sym_AMP_AMP;
	v->a[78938] = anon_sym_PIPE_PIPE;
	v->a[78939] = anon_sym_LT;
	small_parse_table_3947(v);
}

void	small_parse_table_3947(t_small_parse_table_array *v)
{
	v->a[78940] = anon_sym_GT;
	v->a[78941] = anon_sym_GT_GT;
	v->a[78942] = anon_sym_AMP_GT;
	v->a[78943] = anon_sym_AMP_GT_GT;
	v->a[78944] = anon_sym_LT_AMP;
	v->a[78945] = anon_sym_GT_AMP;
	v->a[78946] = anon_sym_GT_PIPE;
	v->a[78947] = anon_sym_LT_AMP_DASH;
	v->a[78948] = anon_sym_GT_AMP_DASH;
	v->a[78949] = anon_sym_LT_LT;
	v->a[78950] = anon_sym_LT_LT_DASH;
	v->a[78951] = anon_sym_AMP;
	v->a[78952] = anon_sym_SEMI;
	v->a[78953] = 15;
	v->a[78954] = actions(3);
	v->a[78955] = 1;
	v->a[78956] = sym_comment;
	v->a[78957] = actions(1959);
	v->a[78958] = 1;
	v->a[78959] = anon_sym_LPAREN;
	small_parse_table_3948(v);
}

void	small_parse_table_3948(t_small_parse_table_array *v)
{
	v->a[78960] = actions(1963);
	v->a[78961] = 1;
	v->a[78962] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78963] = actions(1965);
	v->a[78964] = 1;
	v->a[78965] = anon_sym_DOLLAR;
	v->a[78966] = actions(1967);
	v->a[78967] = 1;
	v->a[78968] = anon_sym_DQUOTE;
	v->a[78969] = actions(1969);
	v->a[78970] = 1;
	v->a[78971] = anon_sym_DOLLAR_LBRACE;
	v->a[78972] = actions(1971);
	v->a[78973] = 1;
	v->a[78974] = anon_sym_DOLLAR_LPAREN;
	v->a[78975] = actions(1973);
	v->a[78976] = 1;
	v->a[78977] = anon_sym_BQUOTE;
	v->a[78978] = actions(1975);
	v->a[78979] = 1;
	small_parse_table_3949(v);
}

void	small_parse_table_3949(t_small_parse_table_array *v)
{
	v->a[78980] = sym_extglob_pattern;
	v->a[78981] = state(1547);
	v->a[78982] = 1;
	v->a[78983] = aux_sym_case_statement_repeat1;
	v->a[78984] = state(2080);
	v->a[78985] = 1;
	v->a[78986] = sym_case_item;
	v->a[78987] = state(2427);
	v->a[78988] = 1;
	v->a[78989] = sym__case_item_last;
	v->a[78990] = state(2224);
	v->a[78991] = 2;
	v->a[78992] = sym_concatenation;
	v->a[78993] = sym__extglob_blob;
	v->a[78994] = actions(1955);
	v->a[78995] = 3;
	v->a[78996] = sym_raw_string;
	v->a[78997] = sym_number;
	v->a[78998] = sym_word;
	v->a[78999] = state(2157);
	small_parse_table_3950(v);
}

/* EOF small_parse_table_789.c */
